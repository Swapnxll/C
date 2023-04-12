#include <stdio.h>

int main()
{
    // QUESTION1: ON GIVING GRADE

    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (marks > 90 && marks <= 100)
    {
        printf("your grade is A");
    }
    else if (marks >= 80 && marks <= 90)
    {
        printf("your grade is B");
    }
    else if (marks > 90 && marks <= 100)
    {
        printf("your grade is C");
    }

    else if (marks > 70 && marks <= 80)
    {
        printf("your grade is D");
    }
    else if (marks < 100)
    {
        printf("your grade is F");
    }
    else
    {
        printf("Invalid marks");
   }
   return 0;
}