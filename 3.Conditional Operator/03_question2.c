//QUESTION 2: pass or fail according to marks
#include <stdio.h>

    int main()
    {
        int physics, chemistry, maths;
        printf("marks in maths\n");
        scanf("%d", &maths);
        printf("marks in physics\n");
        scanf("%d", &physics);
        printf("marks in chemistry\n");
        scanf("%d", &chemistry);

        int percentage = (maths+chemistry+physics)/3;


        if (( percentage >= 40) && (physics>33) && (chemistry>33) && (maths>33))
        {
            printf("your percentage is %d and you are pass\n", percentage);
        }
        else
        {
            printf("your percentage is %d and you are fail", percentage);
        }

        return 0;
    }