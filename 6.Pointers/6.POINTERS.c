#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n", _age);
    // address
    printf("%p\n", &age); //%p gives address in form of hexadecimal
    printf("%p\n", ptr); //%u used for usigned varaible
    printf("%p\n", &ptr); //
    // data
    printf("%d\n", age); // * is used to give value at address
    printf("%d\n", *ptr);
    printf("%d\n", *(&age)); //value at adress of age

    // int i=34;
    // int *j=&i;//here j points towards i. J CONTAINS THE ADDRESS OF I
    // printf("%u\n",&i);// this prints the address of i
    // printf("%d\n",i);//prints the value inside i
    // printf("%d\n", &(*j));// this will also print the value of i as here j points towards i(REPEAT)
    // printf("%u\n",j);//here j contains the address of i
    // printf("%u\n",&j);//this prints the address of j which already contains the address of i. lol
    // printf("%d\n",j);
    return 0;
}
// why %d and %u both prints the address of i ??