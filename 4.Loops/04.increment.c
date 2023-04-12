#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value of i++ is %d\n", i++);  // i++ first print then increment (print value is 5)
    printf("the value of ++i is %d\n ", ++i); //++i first increment then  print (print  value is 7)
    // --i , i--
    i += 10;                             // increments i by 10 (-= , *= , /= , %= )
    printf("the value of i is %d\n", i); // final value is 17
    printf("(the final value - 1) is %d\n", --i);
    return 0;
}
// int main() {
//     int a=3;
//     printf("%d %d %d\n",a,++a,a++); //printf takes values from right to left
//     return 0;
// }