#include <stdio.h>
#include <stdlib.h>
#include "listaduplaencadeada.h"

struct node{
    int data;
    Node* next;
    Node* before;
};
struct list{
    Node* begin;
    Node* end;
};

// Funções Extras
Node* create_Node(int v){
    Node* n = (Node*) malloc(sizeof(Node));
    n ->data = v;
    n ->next = NULL;
    n ->before = NULL;
    return n;
}
void print_List(List* l){
    Node* aux = l ->begin;
    printf("Indo: ");
    while (aux != NULL){
        printf("%d ", aux->data);
        aux = aux ->next;
    }
    printf("\nVoltando: ");
    aux = l ->end;
    while (aux != NULL){
        printf("%d ", aux->data);
        aux = aux ->before;
    }
    (l->begin != NULL)?printf("\nBegin :%d End :%d", l ->begin->data, l->end->data):printf("\nBegin :NULL End :NULL");
}
Node* find_Circular(List* l, int v){
    Node* aux = l ->begin;
    if (aux == NULL) return NULL;
    do {
        if (aux ->data == v) return aux;
        aux = aux ->next;
    } while (aux != l ->begin);
    return NULL;
}

List* create_List(){
    List* l = (List*) malloc(sizeof(List));
    l ->begin = NULL;
    l ->end = NULL;
    return l;
}
void add_begin(List* l, int v){
    Node* new = create_Node(v);
    if (l ->begin != NULL){
        new ->next = l->begin;
        l->begin->before = new;
    } else l ->end = new;
    l->begin = new;
}
void add_end(List* l, int v){
    Node* new = create_Node(v);
    if (l->end != NULL){
        new ->before = l ->end;
        l->end->next = new;
    } else l ->begin = new;
    l ->end = new;
}
Node* find(List* l, int v){
    Node* aux = l ->begin;
    while (aux != NULL){
        if (aux ->data == v) return aux;
        aux = aux->next;
    }
    return NULL;
}
int remove_value(List* l, int v){
    Node* node = find(l, v);
    if (node == NULL) return -1;
    else {
        if (l ->begin == l ->end)l ->begin = l ->end = NULL;
        else if (l ->end == node) {
            l ->end = node->before;
            l ->end->next = NULL;
        } else if (l ->begin == node){
            l ->begin = node ->next;
            l ->begin->before = NULL;
        } else {
            node->before->next = node->next;
            node->next->before = node->before;
        }
        free(node);
        return 0;
    }
}

void becomeCircular(List* l){
    if (l ->begin != NULL){
        l ->end ->next = l ->begin;
        l ->begin->before = l ->end;
    }
}
void printCircular(List* l){
    Node* aux = l ->begin;
    if (aux != NULL){
        printf("Indo: ");
        do {
            printf("%d ", aux->data);
            aux = aux ->next;
        }while (aux != l ->begin);
        printf("\nVoltando: ");
        aux = l ->end;
        do {
            printf("%d ", aux->data);
            aux = aux ->before;
        } while (aux != l->end);
        printf("\nBegin: %d End: %d", l->begin->data, l->end->data);
    }else{
        printf("Begin: NULL End: NULL");
    }
}
void insertCircular(List* l, int v){
    Node* new = create_Node(v);
    if (l->begin != NULL){
        l->end->next = new;
        new->before = l->end;
        new->next = l ->begin;
        l->begin->before = new;
    } else {
        new ->next = new;
        new ->before = new;
        l ->begin = new;
    }
    l ->end = new;
}
void removeElementCircular(List* l, int v){
    Node* node = find_Circular(l, v);
    if (node != NULL){
        if (l ->begin == l->end){
            l ->end = NULL;
            l ->begin = NULL;
        }
        else if (l ->begin == node) l ->begin = node->next;
        else if ( l->end == node) l ->end = node->before;
        node->before->next = node->next;
        node->next->before = node->before;
        free(node);
    }
}

int main() {
    List* l = create_List();
//    add_begin(l,6);
//    add_begin(l,5);
//    add_end(l,7);
//    print_List(l);
//    remove_value(l, 9);
//    print_List(l);
//    Node* n;
//    n = find(l, 9);
//    (n != NULL)? printf("%d\n", n->data):printf("NULL\n");
//    becomeCircular(l);
//    insertCircular(l, 8);
//    insertCircular(l, 9);
//    insertCircular(l, 10);
//    removeElementCircular(l, 8);
//    printCircular(l);
    return 0;
}