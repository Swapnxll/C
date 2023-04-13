#include <stdio.h>


int main() {
    int n = 5;
    for (int i=0;i<=n ;i++) {
        //for every row write the number of comlumbs
        for(int j=0; j<=i;j++){
            printf("*"); // what do you need to print
        }
         printf("\n");
         //when one row is printed a new row starts

    }
    return 0;
}