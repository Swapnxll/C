//QUESTION 5:LOWE CASE or upper case [usa of ASCII value of CHARACTERS]
#include <stdio.h> 
 // 97 to 122 = a to z [ASCII VALUES]
int main() {
    char c;
    printf("enter your character\n");
    scanf("%C",&c);

    if(c>=97 && c<=122) {
        printf("Your character is lower case\n");
    }
    else{
        printf("Your number is upper case\n");
    }
    return 0;
}