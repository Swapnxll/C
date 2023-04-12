// Question--> table of number n
#include <stdio.h>

int main() {
    int n;
    int i;
    printf("type your number n\n");
    scanf("%d",&n);

    for (int i=1; i<=10; i++)
    {
        printf("%d\n", i*n);
    }

    return 0;