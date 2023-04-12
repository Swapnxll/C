#include <stdio.h>

int main()
{
    int a = 4;
    // int b = 8.5; Wrong because 8.5 is not a integer
    float b = 8.5; // 7.0 is also a real number because it also has fractional part
    char c = 'u';
    int d = 45;
    int e = a + d;
    printf("the value of a is %d \n", a+2);
    printf("the value of b is %f \n", b);
    printf("the value of c is %c \n", c);
    printf("the value of f is %d \n", a + d);
    printf("the value of g is %f \n", a - b);
    printf("the value of h is %d \n", a + c);
    printf("the value of i is %c \n", b + c);
    printf("the value of j is %d \n", b + c);
    printf("the value of k is %f \n", b + c);
    printf("the value of l is %c \n", a + b);
    printf("the value of m is %f \n", a + b + c);
    printf("the value of e is %d \n", e);
    return 0;
}