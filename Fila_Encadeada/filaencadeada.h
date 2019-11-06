//
// Created by jhonatan on 06/11/2019.
//

#ifndef PILHA_ENCADEADA_FILAENCADEADA_H
#define PILHA_ENCADEADA_FILAENCADEADA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
typedef struct row Row;

struct node{
    int data;
    Node* next;
};
struct row{
  Node* begin;
  Node* end;
};

Node* createNode(int v);
Row* createRow();
void addRow(Row* r, int v);
int removeRow(Row* r);
void clean(Row* r);

#endif //PILHA_ENCADEADA_FILAENCADEADA_H
