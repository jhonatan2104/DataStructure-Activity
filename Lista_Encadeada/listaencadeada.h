//
// Created by jhonatan on 29/10/2019.
//

#ifndef ACTIVATYED_LISTAENCADEADA_H
#define ACTIVATYED_LISTAENCADEADA_H

typedef struct node Node;
typedef struct list List;

// Question 1
List* createList();
void add(List* l, int v);
void printList(List* l);
int isEmpty(List* l);
void removeBack(List* l);
int size(List* l);

// Question 2
int hasElement(List* l, int v);
int insertPosition(List* l, int v, int pos);
int removePosition(List* l, int pos);
int removeElement(List* l, int v);
int get(List* l, int pos, int *vret);



#endif //ACTIVATYED_LISTAENCADEADA_H
