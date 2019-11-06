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
void printStack(Stack* s){
    Node* aux = s->top;
    while (aux != NULL){
        printf("%d ", aux->data);
        aux = aux ->next;
    }
    printf("\n");
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
    return -1;
}
void clear(Stack* s){
    while (s->top != NULL){
        Node* aux = s->top;
        s ->top = aux->next;
        free(aux);
    }
}


int main(){
    Stack* stack = createStack();
    push(stack, 5);
    push(stack, 4);
    push(stack, 3);
//    pop(stack);
//    clear(stack);
    printStack(stack);
    return 0;
}