//Q.fibonachi series

#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n);
int main() {
    int n;
    printf("%d",fibonacci(5));
    return 0;
}

int fibonacci(int n) 
{
    if (n<=1)
    {
        return 1;

    }
    else{

        return fibonacci(n-1)+fibonacci(n-2);
    }
}