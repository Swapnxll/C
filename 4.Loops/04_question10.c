// QUESTION-->> PRIME NUMBER
#include <stdio.h>

int main()
{
    int i, x ;
    int n;
    printf("enter your number\n");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            x = 0;

            // printf("x\n");
            break;
        }
    }
    if (x == 0 && x!=2)
    {
        printf("not prime\n");
    }
    else
    { 
        printf("prime\n");
    }

    return 0;
}