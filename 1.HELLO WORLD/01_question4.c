#include <stdio.h> 

int main() {
    int principal=23,rate=56,time=12;
    float simple_interest = (principal*rate*time)/100;
    printf("the value of simple interest is %f \n", simple_interest);
    return 0;
}