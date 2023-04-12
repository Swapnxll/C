#include <stdio.h>
#include <stdlib.h>
void change(int a);
int main() {
    int b =43;
    printf("the value of b before chnage is %d\n", b);
    change(b);
    printf("the value of b after change is %d\n",b);

    return 0;
}
void change(int a) {
    a=77; 
}//this happens because a copy of b is passed to the change function