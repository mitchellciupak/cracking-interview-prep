// 1.7 Arrays and Stirngs - Rotate Matrix
// Mitchell Ciupak
// 20201114

/*
Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4
bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

Page(91,102)
*/

#include<stdio.h>

/*
A function to rotate a matrix mat[][] of size R x C.
Initially, m = R and n = C
row - Staring row index
m - ending row index
col - starting column index
n - ending column index
i - iterator
*/
void rotateMatrix(int m, int n, int mat)
{
    int row = 0, col = 0;
    int prev, curr;

    while (row < m && col < n)
    {

        if (row + 1 == m || col + 1 == n)
            break;

        prev = mat[row + 1][col];

        /* Move elements of first row from the remaining rows */
        for (int i = col; i < n; i++) {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;

        /* Move elements of last column from the remaining columns */
        for (int i = row; i < m; i++) {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--;

        /* Move elements of last row from the remaining rows */
        if (row < m) {
            for (int i = n - 1; i >= col; i--) {
                curr = mat[m - 1][i];
                mat[m - 1][i] = prev;
                prev = curr;
            }
        }
        m--;

        /* Move elements of first column from the remaining rows */
        if (col < n) {
            for (int i = m - 1; i >= row; i--) {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }

    // Print rotated matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++){
            printf(mat[i][j]);
        }
    }
}

void main()  {

    int a[4][4] = { {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16} };

    rotateMatrix(4, 4, a);
}