#include <stdio.h>

int main()
{
    int Radius;
    float pi = 3.14;
    printf("what is the Radius of the circle (in m)\n");
    scanf("%d", &Radius);
    float Area = printf("the area of circle is %f m^2 \n", pi * Radius * Radius);
    int Height;
    printf("what is the height of the cylinder (in m)\n");
    scanf("%d", &Height);
    printf("The volume of cylinder is %f m^3\n", Area * Height);
    return 0;
}