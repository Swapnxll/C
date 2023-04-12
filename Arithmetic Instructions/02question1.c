#include <stdio.h> 

int main() {
  //QUESTION 1 : WHICH VALUES CHAR FUNCTION CAN TAKE
  
    char t ='DE';//not valid only one character can be put under ''
    char m = '1';// this is valid
    char h = 'r';// this is also valid

    // QUESTION 2: DIVISIBILITY TEST BY 97
    int e;
    printf("what is your number\n");
    scanf("%d", &e);
    printf("remainder after dividing your number by 97 %d", e%97);
    


    return 0;
}