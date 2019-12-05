#include <stdlib.h>
#include <stdio.h>

typedef struct node Node;

struct node {
    int v;
    Node *esq;
    Node *dir;
};

Node* insert(Node* raiz, int v){
    if ( raiz == NULL) {
        raiz = (Node*) malloc(sizeof(Node));
        raiz->v = v;
        raiz->dir = raiz->esq = NULL;
    }
    else if ( v > raiz ->v) raiz->dir = insert(raiz->dir, v);
    else raiz ->esq = insert(raiz->esq, v);
    return raiz;
}

Node* remove_(Node* raiz, int v){
    if ( raiz == NULL) return NULL;
    else if ( v > raiz->v) raiz->dir = remove_(raiz->dir, v);
    else if ( v < raiz->v) raiz->esq = remove_(raiz->esq, v);
    else {
        Node* aux = raiz;
        if ( raiz->esq == NULL && raiz->dir == NULL) raiz = NULL;
        else if ( raiz->dir == NULL) raiz = raiz->esq;
        else if ( raiz->esq == NULL) raiz = raiz->dir;
        else{
            aux = aux->esq;
            while ( aux->dir != NULL) aux = aux->dir;
            raiz ->v = aux->v;
            aux ->v = v;
            remove_(raiz->esq, v);
        }
        free(aux);
    }
    return raiz;
}

void printOrdem(Node* raiz){
    if ( raiz != NULL){
        printOrdem(raiz->esq);
        printf("%d\n", raiz->v);
        printOrdem(raiz->dir);
    }
}

int sumDiv(Node* raiz, int n){
    if ( raiz == NULL) return 0;
    else if ( raiz->v%n == 0) return n + sumDiv(raiz->dir, n) + sumDiv(raiz->esq, n);
    else return sumDiv(raiz->dir, n) + sumDiv(raiz->esq, n);
}

int main(){
    Node* raiz = insert(raiz, 5);
    insert(raiz, 8);
    insert(raiz, 2);
    insert(raiz, 3);
    insert(raiz, 7);
    remove_(raiz, 5);
    printOrdem(raiz);
    return 0;
}
