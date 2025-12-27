#include <stdio.h>
int main() {
    //first greeting
    printf("Hello, World!\n");

    //test sacnf: input
    int a = 0;
    scanf("%d", &a);
    printf("You entered: %d\n", a);

    //test variables
    int num = 7;
    float Pi = 3.14;
    char c = 'H';
    char str[6] = "shell";
    char* pstr = "Shell";
    printf("Int: %d,\nFloat: %.2f,\nChar: %c,\nString1: %s,\nString2: %s\n", num, Pi, c, str, pstr);
    
    //test operations
    num += 1; //addition
    printf("After addition, num = %d\n", num);
    num -= 1; //subtraction
    printf("After subtraction, num = %d\n", num);
    num *= 2; //multiplication
    printf("After multiplication, num = %d\n", num);
    num /= 2; //division
    printf("After division, num = %d\n", num);
    printf("\n");
    
    //test control flow
    if(num >= 7){
        printf("num is greater than or equal to 7\n");
    } else {
        printf("num is less than 7\n");
    }

    //test loop
    printf("Enter what number you want: ");
    int N = 0;
    scanf("%d", &N);
    for(int i = 0;i < N;i++){
        printf("This is line %d\n", i+1);
    }
    return 0;
}
