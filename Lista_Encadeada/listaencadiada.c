#include <stdio.h>
#include <stdlib.h>
#include "listaencadeada.h"

struct node{
    int v;
    Node* next;
};
struct list{
    Node* begin;
    int size;
};

// Funções Extra
Node* createNode(int v){
    Node* n = (Node*) malloc(sizeof(Node));
    n ->next = NULL;
    n ->v = v;
    return n;
}

List* createList(){
    List* l = (List*) malloc(sizeof(List));
    l ->begin = NULL;
    l ->size = 0;
    return l;
}
void add(List* l, int v){
    Node* new = createNode(v);
    Node* aux = l ->begin;
    if (aux != NULL){
        while (aux ->next != NULL) aux = aux ->next;
        aux->next = new;
    } else{
        l ->begin = new;
    }
    l ->size++;
}
void printList(List* l){
    Node* aux = l ->begin;
    if (aux != NULL){
        while (aux != NULL){
            printf("%d ", aux->v);
            aux = aux ->next;
        }
    }
    printf("\n");
}
int isEmpty(List* l){
    if (l ->begin == NULL) return 1;
    return 0;
}
void removeBack(List* l){
    Node* aux = l ->begin;
    Node* before = NULL;
    if(aux != NULL){
        while(aux ->next != NULL){
            before = aux;
            aux = aux->next;
        }
        if (before == NULL) l ->begin = NULL;
        else before ->next = NULL;
        l ->size--;
        free(aux);
    }
}
int size(List* l){
    return l->size;
}

int hasElement(List* l, int v){
    Node* aux = l ->begin;
    int pos = 0;
    if (aux != NULL){
        while (aux != NULL && aux->v != v) {
            pos++;
            aux = aux ->next;
        }
        if (aux == NULL) return -1;
        return pos;
    }
    return -1;
}
int insertPosition(List* l, int v, int pos){
    int s = size(l);
    if (pos < 0 || s < pos) return -1;

    Node* new = createNode(v);
    Node* aux = l ->begin;
    Node* before = NULL;
    for (int i = 0; i < pos; ++i) {
        before = aux;
        aux = aux ->next;
    }
    new ->next = aux;
    if (before == NULL) l ->begin = new;
    else before->next = new;
    l->size++;
    return 0;
}
int removePosition(List* l, int pos){
    int s = size(l);
    if (pos < 0 || s <= pos) return -1;
    Node* aux = l ->begin;
    Node* before = NULL;
    for (int i = 0; i < pos; ++i){
        before = aux;
        aux = aux ->next;
    }
    if (before == NULL) l ->begin = aux->next;
    else before->next = aux->next;
    l->size--;
    free(aux);
    return 0;
}
int removeElement(List* l, int v){
    int pos = hasElement(l, v);
    if (pos == -1) return -1;
    removePosition(l, pos);
    return 0;
}
int get(List* l, int pos, int *vret){
    int s = size(l);
    if (pos < 0 || s <= pos) return -1;
    Node* aux = l ->begin;
    for (int i = 0; i < pos; ++i) aux = aux->next;
    *vret = aux->v;
    return 0;
}

int main() {
    List* l = createList();
    add(l, 5);
    add(l,6);
    add(l,7);

//    printf("%d", hasElement(l, 10));
//    insertPosition(l,8,1);
//    removePosition(l, 1);
//    removeElement(l, 8);
//    int d;
//    get(l,1, &d);
//    printf("%d", d);
    printList(l);
    printf("%d",size(l));

    return 0;
}