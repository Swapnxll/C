
//IN CALL BY REFERENCE WE MAKE CHANGES IN ADDRESS 
#include <stdio.h>
#include <stdlib.h>
void swap(int* a, int* b);
int main() {
    int i=4;
    int j=3;
    //before swapping 
    printf("%d and %d\n",i,j);
    //swapping
    swap(&i,&j);// we send address of i and j in swap function
    //AFTER SWAPPING
    printf("%d and %d\n",i,j);
    return 0;
}

// inside swap we are sending address of i as &i and it recieves it as *a(*a is pointer)
//same as *a=&i (DECLARING A POINTER)

void swap(int* a,int* b) { // we dont need any return value so we used void
    int temp;
    temp=*a; //here *a is value of address means value inside address of i
    *a=*b;//which makes *a =4 and *a=*b converts value inside adress of i(*a) to value inside value of j(*b)
    *b=temp;
}
