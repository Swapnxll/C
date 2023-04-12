#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    // printf("Today is your bday?(yes/no)\n");
    // scanf("%c", &b);
     
    //  printf("yes is %c", b);
    
// && (and) , || (OR) , !(not)
     if ((age <= 90 && age >= 18) && !(age==22))
    { 
        printf("You are above 18 and below 90,or have VIPpass, so, you can drive\n");
    }

    else
    {
        printf("you can't drive\n");
    }
    return 0;
}