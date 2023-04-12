#include <stdio.h>
//C program to check a number is odd or even
//else only works when if is false
int main()
{
    int a, b;
    printf("enter a number \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else{
        printf("%d is odd\n",a);
    }
    return 0;
}