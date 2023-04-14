//BUTTERFLY PATTERN

#include <stdio.h>

int main() {
    int n=10;
    
    for(int row=1;row<=2*n;row++) {
        if(row<=n) {
        for(int col=1;col<=row;col++){
           printf("*");}
        for(int k=0;k<2*(n-row);k++) {
               printf(" ");}
        for(int revcol=1;revcol<=row;revcol++) {
            printf("*");
        }
        }
        else if(row>n){
            for(int col=1;col<=2*n-row+1;col++){
           printf("*");}
        for(int k=0;k<(row-n-1)*2;k++) {
               printf(" ");}
        for(int revcol=1;revcol<=2*n-row+1;revcol++) {
            printf("*");
        }
            
        }
        printf("\n");
    }
    return 0;
}