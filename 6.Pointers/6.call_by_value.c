
//IN CALL BY VALUE WE MAKE CHANGES IN A COPY OF NUMBER
#include <stdio.h>
#include <stdlib.h>
int sum();
int main() {
    int a=6; 
    int b=4;
    printf("a+b=%d\n",sum(a,b));
    printf("%d and %d",a,b);
    
    return 0;
}
int sum(a,b )
{
    a=20;    
    b=30;
    int z;
    z=a+b;
    return z;
}
// the values of a and b (in main function) are copied to a and b (in sum function).
// even if we change the values of a' and b' in sum,nothing happenes to variables a and b
// this is called call by value.
// hence we cannot change the value in main function using other function.
 