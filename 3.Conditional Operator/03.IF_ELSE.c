#include <stdio.h> 

int main() {
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age>=18) { // >= , <=, ==(for equality) ,!= (not eqaul to) 
        printf("You can drive\n");}

    
    

    if(age==18) { // if we put if(age=18) the code will get executed but 
     // as we know = is an assignment operator so there will be no condition
     // and printf will be printed
    printf("you should issue your driving license\n");}
    else{
        printf("you can't drive\n");
    }

    return 0;
}