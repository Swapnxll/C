//reverse counting from n to 0
#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(int i=n; i>0;--i   ) {
        printf("%d\n",i-1);
    }

    return 0;
}