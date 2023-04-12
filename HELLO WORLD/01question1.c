#include <stdio.h>

int main()
{
    

    // QUESTION 2 : FIND AREA OF THE CIRCLE AND THEN FIND THE VOLUME OF THE CYLINDER
    // int radius;
        float pi = 3.14;
        float radius;
        printf("what is the radius of the circle (in m)\n");
        scanf("%f",&radius);
        float Area = printf("the area of circle is %f m^2 \n", pi * radius * radius);
        
        float Height;
        printf("what is the height of the cylinder (in m)\n");
        scanf("%f", &Height);
        printf("The volume of cylinder is %f m^3\n", Area * Height);

   return 0;
}
