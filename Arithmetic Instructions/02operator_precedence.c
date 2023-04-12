#include <stdio.h>

int main()
{ // BODMAS doesnt matter in c language
// "*/%" > "+-" > = (only if parenthesis is no applied)
//operations in same priority follow operator associativity
//* and / follow operator associativity from left to right


    int x = 2;
    int y = 3;
    printf("the value of 3*x-8*y is %d\n", 3 * x - 8 * y);
    printf("the value of 8*y/3*x is %d\n", 8 * y / 3 * x);
    // 24/3 gives wrong answer
    // (8*y)/3*x (add parenthesis from left and right for same  priority *and/ )
    // (24/3)*x
    // 8*x = 16 
 int e = 3;
 int u =4;
 printf("the value of 6/e+e*u-e+45 is %d \n,",6/e+e*u-e+45);
    
    return 0;
}