#include <stdio.h>

int main()
{
    int f, s;
    int w = f * s;
    printf("age of father is \n");
    scanf("%d", &f); // & is important as it means the supplied
                     // value should be copied to the address which is indicated by variable
    printf("age of son is \n");
    scanf("%d", &s);

    printf("sum of age of both father and son is %d \n", f + s);

    return 0;
}//scanf("%d%d",&a,&b);