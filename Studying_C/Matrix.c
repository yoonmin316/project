#include <stdio.h>

#define M 3
#define N 2

int main(){
    // 1. use 2D array
    int mat[M][N] = {{0, 1}, {2, 3}, {4, 5}};

    printf("Matrix(2, 1): %d\n", mat[1][0]);

    //scalar multiplication
    for(int i=0;i < M;i++){
        for(int j=0;j < N;j++){
            mat[i][j] *= 3;
        }
    }
    //inner product
    int in_mat[M][N] = {0, 1, 2, 3, 4, 5};
    int result = 0;
    for(int i=0;i < M;i++){
        for(int j=0;j < N;j++){
            result += mat[i][j]*in_mat[i][j];
        }
    }
    printf("the result of inner product: %d\n", result);

    // 2. use 1D array
    int matt[M*N] = {0, 1, 2, 3, 4, 5};
    
    printf("Matrix(2, 1): %d\n", matt[1*N+0]);
    
    //scalar multiplication
    for(int k=0;k < M*N;k++){
        matt[k] *= 3;
    }
    //inner product
    int in_matt[M*N] = {0, 1, 2, 3, 4, 5};
    int in_result = 0;
    for(int k=0;k < M*N;k++){
        in_result += matt[k]*in_matt[k];
    }
    printf("the result of inner product: %d\n", in_result);

    return 0;
}