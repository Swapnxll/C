#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("%d",&rating);

    // if we dont use break then all case after the true statement will get executed  
    switch (rating)
    {
    case 1: // case c1
        printf("your rating is 1 \n");
        break;
    case 2: // case c2
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your number is 3\n");
        break;
    case 4:
        printf("yout rating is 4 \n");
        break;
    case 5:
        printf("your rating is 5\n");
        break;
    default:
        printf("invalid rating");
        break;
    }
     return 0;
}

#include<stdio.h>
int main() {
	int a,b,c,m,n,o;;
	printf("enter the number\n");
	scanf("%d",&a);
    if (a==0){
				m=0;}
		if(a<0) {
				m=-1;}
		if (a>0) {
				m=1;}
			 
	switch ( m ){
		case 0:
			printf("a is eqaul to zero\n");
		case  -1:
			printf("a is negative\n");
		case 1:
			printf("a is positive\n");
		default:
			printf("ERROR: enter a int value\n"); }
return 0;
}