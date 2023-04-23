//will the address be same or not.
#include <stdio.h>
#include <stdlib.h>
void print_address();
int main() {
    int n;
    printf("%u\n",&n);
    print_address(n);
    return 0;
}
void print_address(int n){
    printf("%u\n",&n);
}

//address will be different because in function the copy of n ig given
//the copy of n will have a different address.


// #include <stdio.h>
// #include <stdlib.h>
// void print_address();
// int main() {
//     int n;
//     printf("%u\n",&n);
//     print_address(&n);
//     return 0;
// }
// void print_address(int *n){ 
//     printf("%u\n",&(*n));
// }
//here same address will be printed