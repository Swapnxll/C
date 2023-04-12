// Q.find average of three numbers using function
#include <stdio.h>
#include <math.h>

float average(int, int, int);
int main()
{
    int a = 3;
    int b = 5;
    int c = 2;
    printf("average of a,b,c is %f\n",average(a, b, c));

    return 0;
}
float average(int a, int b, int c)
{
    float d;
    d = (a + b + c)/3;
    return d;
}