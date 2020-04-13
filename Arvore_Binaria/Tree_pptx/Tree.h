//
// Created by jhonatan on 02/12/2019.
//

#ifndef ARVORE_BINARIA_TREE_H
#define ARVORE_BINARIA_TREE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct node Node;

struct node{
    int value;
    Node* left;
    Node* right;
};

Node* createNode(int value){
    Node* node = (Node*) malloc(sizeof(Node));
    node ->value = value;
    node ->right = NULL;
    node ->left = NULL;
    return node;
}

void insert(Node** root, int value){
    if (*root == NULL)
        (*root) = createNode(value);
    else if ( ((*root)->value) > value )
        insert(&((*root)->left), value);
    else
        insert(&((*root)->right), value);
}
void printTreeOrdem(Node* root){
    if ( root != NULL) {
        printTreeOrdem(root->left);
        printf("%d ", root->value);
        printTreeOrdem(root->right);
    }
}
void removeValue(Node** root, int value){
    if ( *root == NULL){
        if ( value > (*root)->value) removeValue(&((*root)->right), value);
        else if ( value < (*root)->value) removeValue(&((*root)->left), value);
        else {
            Node* aux = *root;
            if ( (*root)->left == NULL && (*root)->right == NULL) {
                free(aux);
                (*root) = NULL;
            } else if ( (*root) ->left == NULL) {
                (*root) = (*root) ->right;
                free(aux);
            } else if ( (*root) -> right == NULL){
                (*root) = (*root) ->left;
                free(aux);
            } else{
                aux = aux->left;
                while (aux->right != NULL) aux = aux->right;
                (*root) ->value = aux->value;
                removeValue(&((*root)->left), aux->value);
                free(aux);
            }
        }
    }
}



#endif //ARVORE_BINARIA_TREE_H
