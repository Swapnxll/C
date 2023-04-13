#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=5;

    for(int row=1;row<=n;row++) {
        
        for(int k=0;k<n-row;k++){
            printf("  ");
        }
        for(int col=row;col>=1;col--) {
            printf(" %d",col);
        }
        for(int col=2;col<=row;col++) {
            printf(" %d",col);
        }
    
            
           
        
        printf("\n");
    }
    

    return 0;
}