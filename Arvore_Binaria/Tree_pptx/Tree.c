//
// Created by jhonatan on 02/12/2019.
//

#include "Tree.h"

int main(){

    Node* root = NULL;
    insert(&root, 5);
    insert(&root, 7);
    insert(&root, 4);
    insert(&root, 8);
    insert(&root, 2);
    printTreeOrdem(root);printf("\n");
    removeValue(&root, 7);
    printTreeOrdem(root);
    return 0;
}