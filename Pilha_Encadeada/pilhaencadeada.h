//
// Created by jhonatan on 06/11/2019.
//

#ifndef DATASTRUCTURE_ACTIVITY_PILHAENCADEADA_H
#define DATASTRUCTURE_ACTIVITY_PILHAENCADEADA_H

#include <stdio.h>

typedef struct stack Stack;
typedef struct node Node;

struct node{
    int data;
    Node* next;
};
struct stack{
    Node* top;
};

Node* createNode(int v);
Stack* createStack();
void printStack(Stack* s);
void push(Stack* s, int v);
int pop(Stack* s);
void clear(Stack* s);

#endif //DATASTRUCTURE_ACTIVITY_PILHAENCADEADA_H
