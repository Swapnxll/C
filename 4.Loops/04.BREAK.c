#include <stdio.h>

int main() //break is used to break the loop and stop
{
    int i = 0;

    do
    {
        printf("the value od i is %d\n", i);
        if(i==5) {
            break;
        }

        i++;
    } while (i < 10);

    return 0;
}