#include <stdio.h> 
// ternery is a one liner if-else statement
// condition ? expression if true : expression if false
int main() {
    int a;
    printf("enter a\n ");
    scanf("%d",&a);

    (a>3)? printf("a is greater than 3") : printf("a is less than 3");



    return 0;
}