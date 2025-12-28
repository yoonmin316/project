#include <stdio.h>
#include <string.h>

int main(){
    printf("About Strings in C Language\n");
    char str1[] = "Example String in C"; //마지막에 null 문자('\0')가 자동으로 추가된다.
    printf("String with char array: %s\n", str1); //이때, str1은 배열의 이름이므로 배열의 첫 번째 요소의 주소를 가리킨다.
    char* str2 = "Another Example String"; //문자열 리터럴은 수정할 수 없다.
    printf("String with char pointer: %s\n", str2); //str2는 문자열 리터럴의 시작 주소를 가리킨다.

    //indexing
    printf("First character of str1: %c\n", str1[0]); //첫 번째 문자 출력
    printf("Second character of str2: %c\n", *(str2+1)); //두 번째 문자 출력
    //%s 는 그저 포인터의 주소나 배열의 이름(=주소)를 넘기면 되지만, %c는 값을 넘겨야 한다는 점에 유의!
    *(str1+1) = 'X';
    printf("Modified str1: %s\n", str1);

    //length of string
    //first method
    int length1 = sizeof(str1)/sizeof(char); //그러나 마지막, null 문자 포함!
    //second method
    int length2 = strlen(str1); //순수한 문자열의 길이!
    printf("First length: %d, Second length: %d\n", length1, length2);

    //compare strings
    char compStr1[] = "Korea";
    char* compStr2 = "Korea";
    int compare_result = strcmp(compStr1, compStr2); //같은 문자열이면 0
    printf("First word is %s, Second word is %s\nComparison result: %d\n", compStr1, compStr2, compare_result);
    
    //string copy
    char* original = "original string";
    char new_copy[20]; //복사할 크기를 미리 준비해야 한다!
    strcpy(new_copy, original); //original의 내용을 new_copy로 복사
    printf("Original string: %s\nNew copied string: %s\n", original, new_copy);

    //string input
    //1. using fgets
    char input1[50]; //미리 크기 준비
    printf("Enter what you want to input: ");
    fgets(input1, sizeof(input1), stdin);
    printf("U entered: %s", input1); //fgets는 개행 문자(\n)도 함께 저장한다는 점에 유의!

    //2. using scanf %*c
    char input2[50];
    printf("Enter what you want to input: ");
    scanf("%[^\n]%*c", input2); //\n 전까지 입력 받기, %*c는 개행 문자 제거용
    printf("U entered: %s\n", input2);

    //3. using scanf %s
    char input3[50];
    printf("Enter what you want to say: ");
    scanf("%[^\n]s", input3); //\n 전까지 입력 받기
    printf("U said: %s\n", input3);

    //4. using getchar in a loop
    char input4[50];
    printf("Enter what you want to type: ");
    int i = 0;
    char ch;
    while((ch = getchar()) != '\n' && i < sizeof(input4) - 1){ //개행 문자 전까지 또는 배열 크기 초과 전까지
        input4[i++] = ch;
    }
    input4[i] = '\0'; //문자열의 끝에 null 문자 추가
    printf("U typed: %s\n", input4);

    return 0;
}