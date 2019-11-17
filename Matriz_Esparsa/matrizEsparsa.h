//
// Created by jhonatan on 12/11/2019.
//

#ifndef MATRIZ_ESPARSA_MATRIZESPARSA_H
#define MATRIZ_ESPARSA_MATRIZESPARSA_H

#include <stdlib.h>
#include <stdio.h>

typedef struct node Node;
typedef struct matriz Matriz;

struct node{
    int v;
    int pos;
    Node* next;
};
struct matriz{
    Node** array;
    int line;
    int columns;
};

Node* createNode(int value, int pos){
    Node* node = (Node*) malloc(sizeof(Node));
    node->v = value;
    node->pos= pos;
    node->next = NULL;
    return node;
}

Matriz* createMatrix(int line, int columns){
    Matriz* m = (Matriz*) malloc(sizeof(Matriz));
    m ->columns = columns;
    m ->line = line;
    m ->array = (Node**) malloc(line*sizeof(Node*));
    for (int i = 0; i < line; i++) m ->array[i] = NULL;
    return m;
}
int addValue(Matriz* matriz, int value, int line, int columns){
    if (line < 0 || line >= matriz->line || columns < 0 || columns >= matriz->columns) return -1;
    Node* befor = NULL;
    Node* aux = matriz->array[line];
    while (aux != NULL && aux->pos < columns){
        befor = aux;
        aux = aux->next;
    }
    if (aux != NULL && aux->pos == columns) {
        if (value == 0) {
            if (befor == NULL) matriz->array[line] = aux->next;
            else befor ->next = aux->next;
            free(aux);
        }
        else aux->v = value;
    } else {
        Node* new = createNode(value, columns);
        if (befor == NULL) matriz->array[line] = new;
        else befor->next = new;
        new->next = aux;
    }
    return 0;
}

void printMatrix(Matriz* matriz){
    for (int i = 0; i < matriz->line; ++i) {
        Node* aux = matriz->array[i];
        for (int j = 0; j < matriz->columns; ++j) {
            if (aux != NULL && aux->pos == j) {
                printf("%d ", aux->v);
                aux = aux->next;
            }
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");
}

#endif //MATRIZ_ESPARSA_MATRIZESPARSA_H
