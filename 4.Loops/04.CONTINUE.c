#include <stdio.h>

int main()
{ // continue is used to move the
    // next iteration of the loop meaning skipping everything below "continue" inside the loop for that iteration
    
   for(int i=0;i<=10;i++) {
   if (i==6)
   {
    continue;
   }
    printf("%d\n",i);
   }

    return 0;
}