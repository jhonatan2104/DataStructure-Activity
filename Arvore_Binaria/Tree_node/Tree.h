//
// Created by jhonatan on 29/11/2019.
//

#ifndef MATRIZ_ESPARSA_TREE_H
#define MATRIZ_ESPARSA_TREE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct node Node;

struct node{
    int value;
    Node* left;
    Node* right;
};

Node* create(int value){
    Node* new = (Node*) malloc(sizeof(Node));
    new ->right = NULL;
    new ->left = NULL;
    new ->value = value;
    return new;
}

Node* insertValue(Node* root, int value){
    if ( root == NULL) root = create(value);
    else if (value > root->value)  root->right = insertValue(root->right, value);
    else if (value < root->value) root->left = insertValue(root->left, value);

    return root;
}

void printTree(Node* root){
    if (root == NULL) return;
    printTree(root->left);
    printf("%d ", root->value);
    printTree(root->right);
}

Node* findValue(Node* root, int value){
    if (root == NULL) return NULL;
    else if ( root ->value == value) return root;
    else if ( value > root ->value) return findValue(root->right, value);
    else return findValue(root->left, value);
}

int size(Node* root){
    if ( root == NULL) return 0;
    int sizeLeft, sizeRight;
    sizeLeft = size(root->left);
    sizeRight = size(root->right);
    return sizeLeft + sizeRight + 1;
}

int getHeight(Node* root){
    if ( root == NULL) return 0;
    int leftHeight, rightHeight;
    leftHeight = getHeight(root ->left);
    rightHeight = getHeight(root ->right);
    if (leftHeight > rightHeight) return 1 + leftHeight;
    else return 1 + rightHeight;
}

int sumX(Node* root, int value){
    if ( root == NULL) return 0;
    int sumXLeft = sumX(root->left, value);
    int sumXRight = sumX(root->right, value);
    if (root ->value > value) return 1 + sumXLeft + sumXRight;
    else return sumXLeft + sumXRight;
}

Node* removeValue(Node* root, int value){
    if ( root == NULL) return NULL;
    else if ( value > root -> value ) root ->right = removeValue(root->right, value);
    else if ( value < root -> value) root ->left = removeValue(root->left, value);
    else{
        // Value é igual
        Node* aux = root;
        if ( root->left == NULL && root ->right == NULL) root = NULL;
        else if ( root ->right == NULL) root = root->left;
        else if ( root ->left == NULL) root = root->right;
        else {
            aux = aux ->left;
            while (aux ->right != NULL) aux = aux ->right;
            // Troca de Chaves
            root ->value = aux ->value;
            aux->value = value;
            //
            root ->left = removeValue(root->left, value);
        }
        free(aux);
    }
    return root;
}

Node* insert( Node* root, int value){
    if (root == NULL) root = create(value);
    else if (value > root ->value) root ->right = insert(root->right, value);
    else root->left = insert(root->left, value);
    return root;
}




#endif //MATRIZ_ESPARSA_TREE_H
