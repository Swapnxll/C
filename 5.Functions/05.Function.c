#include <stdio.h>

void display(); // function prototype
int main() {
   
    int a;
    printf("display work starts\n");
    display(); // Function call
    printf("display work end\n");
    return 0;
}
// Function defintion
void display() {
    printf("display works\n");
}//here VOID means it is not returning any value,so it can be replaced with int which
//will return a value integer.