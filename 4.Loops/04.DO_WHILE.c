#include <stdio.h>

int main()
{
    int i = 0; // even if the while confdition is not fulfilled
    do         // the code will run atleast one time
    { 
        printf("value of i is %d\n", i);
        i++;

    }

    while (i < 10);

    return 0;
}