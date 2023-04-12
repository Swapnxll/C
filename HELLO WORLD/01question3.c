#include <stdio.h>

int main()
{
    float celsius, farenheit;
    printf("what is the temperature in celsius \n");
    scanf("%f", &celsius);
    printf("temperature in farenheit is %f \n", (celsius * 9 / 5) + 32);

    return 0;
}