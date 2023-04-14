#include <stdio.h>

int main() {
    int n=4;
    for (int row=1;row<=n;row++) {
        for(int col=1;col<=n+1;col++){
        if(row==1 || row==n || col== 1 || col==n+1) {
            printf("*");
        }
        else {
            printf(" ");
        }
        
        }
        printf("\n");
    }
    return 0;
}
