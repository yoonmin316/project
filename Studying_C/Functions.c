#include <stdio.h>

//define functions
int summing(int a, int b); //getting integer inputs and resulting integer output
float area_circle(int r); //getting integer input and resulting float output
char* greeting(); //getting no input and resulting string output
void goodbye(); //getting no input and resulting void

int main(){
    printf("About Functions in C Language\n");
    printf("Example of summing function: %d + %d = %d\n", 3, 2, summing(3, 2));
    printf("Example of getting area of circle: %f\n", area_circle(1));
    printf("Example of greeting: %s\n", greeting());
    goodbye();
    return 0;
}

//about functions
int summing(int a, int b){
    return a+b;
}
float area_circle(int r){
    float Pi = 3.14;
    return r*r*Pi;
}
char* greeting(){ //함수에서 문자열을 다룰 때는, return 값은 포인터로!!!
    char* ment = "Hi, I'm one of functions in c";
    return ment;
}
void goodbye(){
    printf("Hola, gracias! Hasta luego!");
}