//
// Created by jhonatan on 30/10/2019.
//

#ifndef ACTIVATYED_LINKDOUBLE_LISTADUPLAENCADEADA_H
#define ACTIVATYED_LINKDOUBLE_LISTADUPLAENCADEADA_H

typedef struct node Node;
typedef struct list List;


List* create_List();
void add_begin(List* l, int v);
void add_end(List* l, int v);
Node* find(List* l, int v);
int remove_value(List* l, int v);

void becomeCircular(List* l);
void printCircular(List* l);
void insertCircular(List* l, int v);
void removeElementCircular(List* l, int v);

#endif //ACTIVATYED_LINKDOUBLE_LISTADUPLAENCADEADA_H
