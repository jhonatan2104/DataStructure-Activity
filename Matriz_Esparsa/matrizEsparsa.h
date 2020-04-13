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
    int df;
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
int get(Matriz* m, int line, int column){
    if (line < 0 || line >= m -> line || column < 0 || column >= m->columns) return -1;
    Node* aux = m->array[line];
    while (aux != NULL && aux->pos < column) aux = aux->next;
    if (aux != NULL && aux->pos == column) return aux->v;
    else return m->df;
}

int delete(Matriz* m, int line, int columns){
    if (line < 0 || line >= m->line || columns < 0 || columns >= m-> columns) return -1;
    Node* before = NULL;
    Node* aux = m -> array[line];
    while (aux != NULL && aux -> pos < columns){
        before = aux;
        aux = aux ->next;
    }
    if ( aux != NULL && aux -> pos == columns){
        if (before == NULL) m->array[line] = aux -> next;
        else before -> next = aux ->next;
        int value = aux->v;
        free(aux);
        return value;
    }
    return m ->df;
}

void printMatrix(Matriz* matriz){
    for (int i = 0; i < matriz->line; ++i) {
        Node* aux = matriz->array[i];
        for (int j = 0; j < matriz->columns; ++j) {
            if (aux != NULL && aux->pos == j) {
                printf("%d ", aux->v);
                aux = aux->next;
            }
            else printf("%d ", matriz->df);
        }
        printf("\n");
    }
    printf("\n");
}
int addSorted(Matriz* m, int value, int line){
    if (line < 0 || line >= m->line) return -1;
    Node* aux = m->array[line];
    Node* befor = NULL;
    while (aux != NULL && aux->v < value){
        befor = aux;
        aux = aux -> next;
    }
    Node* new = (Node*) malloc(sizeof(Node));
    new ->v = value;
    new -> next = NULL;
    if (befor == NULL){
        new ->pos = 0;
        m ->array[line] = new;
        if (aux != NULL) {
            new ->next = aux;
            aux ->pos++;
        }
    } else {
        befor ->next = new;
        new ->next = aux;
        new -> pos = befor->pos + 1;
    }
    return 0;
}

#endif //MATRIZ_ESPARSA_MATRIZESPARSA_H
