//Q. print star pattern using recursion
#include <stdio.h>
#include <stdlib.h>
int pattern();
int main() {
    printf("%d",pattern(4));
    return 0;
}

int pattern(int x)
{
    if (x==1)
    {
        return 0;
    }
    else {
        pattern(x-1);
        for(int i=0;i<(2*x)-1;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}