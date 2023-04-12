#include <stdio.h>


int main() {
    int n = 5;
    for (int row=0; row<n ;row++) {
        for(int col=0; col<=row;col++){
            printf("%d",col+1);
        }
         printf("\n");

    }
    return 0;
}