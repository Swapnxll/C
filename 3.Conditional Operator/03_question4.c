//Question 3 : Income tax 
#include <stdio.h> 

int main() {
    float tax=0;
    float income_slab;
    printf("Enter your Income slab\n");
    scanf("%f", &income_slab);

if(income_slab>=250000 && income_slab<=500000) {
    tax = tax + 0.05*(income_slab-250000);
    
}
else if(income_slab>500000 && income_slab<=1000000) {
    tax = tax + 0.2*(income_slab-500000);
}

else if(income_slab>1000000) {
    tax = tax + 0.3*(income_slab-1000000);
}
else{
    printf("NO tax will be charged");
}
printf("your income tax to be paid is %f\n", tax);
    return 0;
}
