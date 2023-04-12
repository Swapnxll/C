#include <stdio.h>
#include <stdlib.h>

int main() {
    //QUESTION 3: evaluate
    //3*x/y-z+k
    int x=2,y=8,z=9,k=4;
    int m=3*x/y-z+k;
    printf("%d",m);
    //(3*x)/y-z+k 
    int n=(3*x)/y-z+k;
    printf("%d",n);
    return 0;
}