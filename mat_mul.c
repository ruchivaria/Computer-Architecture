// C program to  implement multiplication of two 2-dimensional matrices 
#include <stdio.h>
#define N 2

//multiply function that accepts two integer matrices mat1[][] and mat2[][]
//and stores the integer answer in ans[][]

void multiply(int mat1[][N], int mat2[][N], int ans[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            ans[i][j] = 0;
            for (k = 0; k < N; k++)
                ans[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
 
//main() function that tests for pre-defined values in mat1 and mat 2
int main()
{
    int mat1[N][N] = { { 1, 2},
                       { 3, 4 } };
 
    int mat2[N][N] = { {5, 6},
                       {7, 8} };
                       
                       
//ans matrix to store the answer for matrix multiplication
    int ans[N][N]; 
    int i, j;
    
//calling the multiply function defined above
    multiply(mat1, mat2, ans);
 
//Printing the respective matrices 
    printf("The matrix multiplication of the two matrices is \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", ans[i][j]);
        printf("\n");
    }
 
    return 0;
}
