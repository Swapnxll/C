#include <stdio.h>


int main() {
    int n = 5;
    
   
    for (int row=0; row<=2*n-1 ;row++) {
         int totalcol= row>n?2*n-row:row;
        for(int col=0; col<totalcol;col++){
            printf("*");
        }
         printf("\n");

    }
    return 0;
}