//
// Created by jhonatan on 12/11/2019.
//

#include "matrizEsparsa.h"

int main(){
    Matriz* m = createMatrix(5,5);
    addValue(m,5, 2, 3);
    addValue(m,7, 2, 2);
    addValue(m,8, 2, 0);
    addValue(m,8, 3, 0);
    printMatrix(m);
//    delete(m, 2, 3);
    addSorted(m,7, 3);
    printMatrix(m);
    printf("%d %d\n", get(m, 2,3), get(m, 3, 1));
    return 0;
}