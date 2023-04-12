#include <stdio.h>
#include <stdlib.h>
//typecasting syntax
//(type)value;
int main() {
    int a=3;
    float b = 54/7;// calculation between int and int will always be an int
    float c=(float)54/7;//so to convert values from one data type to another typecasting is used
    printf("%f\n",b);//this will give only int value even if b is a float
    printf("%f\n",c);// this will give proper float value                  

    return 0;
}