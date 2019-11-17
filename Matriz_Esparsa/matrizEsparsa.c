//
// Created by jhonatan on 12/11/2019.
//

#include "matrizEsparsa.h"

int main(){
    Matriz* m = createMatrix(5,5);
    printMatrix(m);
    addValue(m,5, 2, 3);
    addValue(m,7, 2, 2);
    addValue(m,8, 2, 0);
    addValue(m,8, 3, 0);
    printMatrix(m);
    return 0;
}