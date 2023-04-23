#include <stdio.h>
#include <stdlib.h>
//pointer to a pointer 
int main() {
    int i=4;
    int *j;
    j=&i;
    int **k;
    k=&j;
    printf("%u\n",j);//print adress of i
    printf("%u\n",&j);//print adress of j
    printf("%d\n",*j); //print value of i
    printf("%u\n",k); //print adress of j
    printf("%u\n",&k);//adress of k
    printf("%d\n",**k);//print value of i
    return 0;
}  