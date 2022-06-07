// 1.8 Arrays and Stirngs - Zero a Matrix
// Mitchell Ciupak
// 20201114

/*
Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
column are set to 0.

Page(91,102)
*/

#include<stdio.h>
#include <stdbool.h>

int* zeroAMatrix(int M, int N){
    return calloc(M * N * sizeof(int), M * N)
}

void main(){

    int* matrix = zeroAMatrix(5, 5);
    free(matrix);
}