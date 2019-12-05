//
// Created by jhonatan on 29/11/2019.
//

#include "Tree.h"

int main(){
    Node* root = create(8);
    insertValue(root, 10);
    insertValue(root, 4);
    insertValue(root, 8);
    insertValue(root, 1);
    insertValue(root, 7);
    insertValue(root, 45);
    printTree(root);
//    Node* aux = findValue(root, 10);
//    printf("%d\n", aux->value);
//    printf("Tamanho : %d", size(root));
//    printf("Altura : %d ", getHeight(root));
//    printf("Count : %d ", sumX(root, 5));
    removeValue(root, 8);
    printf("%d\n", root->value);
    printTree(root);

    return 0;
}
