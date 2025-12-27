#include <stdio.h>
int main(){
    printf("About Operations in C Language\n");
    //Basic Arithmetic Operations
    int a = 8, b = 4;
    printf("a = %d, b = %d\n", a, b);
    printf("Addition: a + b = %d\n", a + b);
    printf("Subtraction: a - b = %d\n", a - b);
    printf("Multiplication: a * b = %d\n", a * b);
    printf("Division: a / b = %d\n", a / b);
    printf("Modulus: a %% b = %d\n", a % b);
    printf("\n");

    //Comparison Operations
    int isTF = 0;
    printf("Comparison Operations:\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("\n");

    //Logical Operations
    int x = 1, y = 0;
    printf("Logical Operations:\n");
    printf("x && y: %d\n", x && y);
    printf("x || y: %d\n", x || y);
    printf("!x: %d\n", !x);
    printf("!y: %d\n", !y);
    printf("\n");

    //Bitwise Operations
    unsigned int test = 0;
    printf("Enter a number for bitwise operations: ");
    scanf("%d", &test);
    printf("The number in decimal: %d\nThe number in binary: %b\nThe length of int in bits: %ld\n", test, test, sizeof(int)*8);
    printf("Inverse bits: %b --> The number in decimal: %d\n", ~test, ~test);
    printf("Left shift by 1: %b --> The number in decimal: %d\n", test << 1, test << 1);
    printf("Right shift by 1: %b --> The number in decimal: %d\n", test >> 1, test >> 1);
    printf("Bitwise AND with 1: %b --> The number in decimal: %d\n", test & 1, test & 1);
    printf("Bitwise OR with 1: %b --> The number in decimal: %d\n", test | 1, test | 1);
    printf("Bitwise XOR with 1: %b --> The number in decimal: %d\n", test ^ 1, test ^ 1);
    printf("The Last bit of the number is: %d\n", test & 1);

    //Three conditional operator
    int num = 10;
    char* result = (num % 2 == 0) ? "True" : "False";
    printf("Is %d even? %s\n", num, result);
    
    return 0;
}