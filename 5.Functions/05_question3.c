//Q. using recursion to find the sum of first n numbers
#include <stdio.h>

int sum(int x);
int main() {
    int n;
    printf("enter the value\n");
    scanf("%d",&n);
    printf("%d\n",sum(n));

    
    return 0;
}
int sum(int x) 
{
    if(x==0) {
        return 0;
    }
    else {
        return x + sum(x-1);
    }
}

    