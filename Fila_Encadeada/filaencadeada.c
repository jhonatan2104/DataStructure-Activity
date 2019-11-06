//
// Created by jhonatan on 06/11/2019.
//

#include "filaencadeada.h"

Node* createNode(int v){
    Node* node = (Node*) malloc(sizeof(Node));
    node ->data = v;
    node ->next = NULL;
    return node;
}
Row* createRow(){
    Row* row = (Row*) malloc(sizeof(Row));
    row ->begin = NULL;
    row ->end = NULL;
    return row;
}
void addRow(Row* r, int v){
    Node* new = createNode(v);
    if(r->end != NULL) r ->end ->next = new;
    else r ->begin = new;
    r ->end = new;
}

int removeRow(Row* r){
    if (r->begin != NULL){
        Node* aux = r->begin;
        int data = r ->begin->data;
        if (r ->begin == r ->end) r ->begin = r ->end = NULL;
        else r ->begin = aux->next;
        free(aux);
        return data;
    }
    return -1;
}
void clean(Row* r){
    Node* aux;
    while (r ->begin != NULL){
        aux = r ->begin;
        r ->begin = aux->next;
        free(aux);
    }
    r->end = NULL;
}

int main(){
    return 0;
}