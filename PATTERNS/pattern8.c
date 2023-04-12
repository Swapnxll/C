#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=4;
    for(int row =0;row<2*n;row++) {
        if(row<=n) {
            for(int k=0;k<=n-row-1;k++){
                printf(" ");
            }
        for(int col=row;col>=1;col--){
            printf("%d",col);
        }
        for (int col=2;col<=row;col++){
            printf("%d",col);
        }
        }
        else if(row>n) {
            for(int k=0;k<=row-n-1;k++){
                printf(" ");
            }
            for(int col=2*n-row;col>=1;col--){
            printf("%d",col);
        }
        for (int col=2;col<=2*n-row;col++){
            printf("%d",col);
        }
        }
        printf("\n");
    }
    return 0;
}