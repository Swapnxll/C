#include <stdio.h> 

int main() {
    int a =6,b =7, c=8; // Type delaration instruction
    b = c = a; //reverse of last two lines will create error
    printf("value of b is %d \n", b);
    return 0;
}