#include <stdio.h>
#include <math.h>
int main()
{
    int a = 3;
    int b = 4;
    int z;
    z = a + b; // This is legal
    // a+b=z; illegal because "=" is a assignment operator
    //        which puts right value in left
    printf("sum is %d \n", a + b);
    printf("difference is %d \n", a - b);
    printf("product is %d \n", a * b);
    printf("divide is %d \n", a / b);
    printf("sum is %d \n", z);
    // modulus operator "%" (find remainder)(no value in float)
    // remainder will be negative only if numerator is negative
    printf("remainder if 5 is divided by 2 is %d \n", 5 % 2);
    printf("remainder if -5 is divided by -2 is %d \n", -5 % 2); // only this will be negative
    printf("remainder if -5 is divided by 2 is %d \n", -5 % 2); // only this will be negative
    printf("remainder if 5 is divided by -2 is %d \n", 5 % -2);
    // there is no operator to perform exponential fuction in C
    printf("the value of 2 to the power 5 is %f\n", pow(4, 5)); // use pow function (with #include <math.h>)

    printf("the value of 5/2 is %d \n", 5 / 2);
    printf("the value of 2/3 is %d \n", 2 / 5);
    printf("the value of 5/2 is %f \n", 5 / 2); // confusion
    printf("the value of 5/2 is %f \n", 5.0 / 2);
    printf("the value of 2.0/5 is %f \n", 2.0 / 5);
    
    int k =3.0/9;
    printf("value of k is %f\n", k);
    
    
    
    return 0; //                                                                     (result will be in float)
}