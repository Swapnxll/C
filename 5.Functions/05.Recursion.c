#include <stdio.h>
#include <stdlib.h>
int factorial(int x);
int main()
{ // recursion means same function calling itself directly or indirectly
    int a;
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("value of factorial of a is %d\n", factorial(a));

    return 0;
}
int factorial (int x)
{ printf("%d\n",x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else { 
        return x * factorial(x-1);
    }
}
// how does return works
