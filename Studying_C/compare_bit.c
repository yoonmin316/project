#include <stdio.h>
#include <time.h>

int main(){
    int epochs = 50;
    clock_t start = clock();
    //Just multiplication
    long long int num[4] = {1, 1, 1, 1};
    for(int k=0;k < 4;k++){
        for(int i = 0;i < epochs;i++){
            printf("%lld ", num[k]);
            num[k] *= 2;
        }
    }
    for(int k=0;k < 4;k++){
        for(int j=0;j < epochs;j++){
            printf("%lld ", num[k]);
            num[k] /= 2;
        }
    }
    printf("\n");
    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time for Just Multiplication: %f seconds\n", cpu_time_used);

    //Multiplication using Bitwise Shift
    start = clock();
    long long int numi[4] = {1, 1, 1, 1};
    for(int k=0;k < 4;k++){
        for(int i = 0;i < epochs;i++){
            printf("%lld ", numi[k]);
            numi[k] = numi[k] << 1;
        }
    }
    for(int k=0;k < 4;k++){
        for(int j=0;j < epochs;j++){
            printf("%lld ", numi[k]);
            numi[k] = numi[k] >> 1;
        }
    }
    printf("\n");
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time for Multiplication using Bitwise Shift: %f seconds\n", cpu_time_used);
    
    /*
    clock_t start = clock();
    for(int i = 0;i < 5000;i++){
        for(int j = 0;j < 5000;j++){
            int result = i*j;
            printf("%d ", result);
        }
    }
    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time for operations: %f seconds\n", cpu_time_used);
    */
    return 0;
}