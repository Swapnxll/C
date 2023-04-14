#include <stdio.h>

int main() {
    int n =5;
    for(int row=0;row<=n;row++){
        for(int k=0;k<=n-row;k++) {
            printf(" ");
        }
        for(int col=0;col<=n;col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}