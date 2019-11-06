//
// Created by jhonatan on 06/11/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include "pilhaencadeada.h"

Node* createNode(int v){
    Node* n = (Node*) malloc(sizeof(Node));
    n->data = v;
    n->next = NULL;
    return n;
}
Stack* createStack(){
    Stack* s = (Stack*) malloc(sizeof(Stack));
    s->top=NULL;
    return s;
}
void push(Stack* s, int v){
    Node* new = createNode(v);
    new ->next = s->top;
    s ->top = new;
}
int pop(Stack* s){
    if (s ->top != NULL){
        Node* aux = s->top;
        s ->top = aux->next;
        int r = aux->data;
        free(aux);
        return r;
    }
}

int main(){
    return 0;
}