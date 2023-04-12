#include <stdio.h> 

int main() {
    int num;
    printf("Enter your number\n");
    scanf("%d", &num);

    if(num==1) {
        printf("Your number is 1\n");
    
    }
    else if(num==2) {
        printf("Your number is 2\n");

    }
    else if(num==3) {
        printf("your number is 3\n");
    }
    else{
        printf("invalid");
            }
    return 0;
}

// OPerator precedence (priority order)
// !
// * / %
// + -
// <> ,<=,>=
// ==, !=
// &&
// ||
// =