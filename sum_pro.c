#include<stdio.h>

int main()
{
    int num1, num2,sum,pro;    
            
    //num1=10;
    //num2=20;
    
    //printf("\n *** Program to illustrate integer variables *** \n");
 
    printf("\n Enter 1st Number");
    scanf(" %d", &num1);

    printf("\n Enter 2nd Number");
    scanf(" %d", &num2); 

    sum = num1 + num2;
    pro = num2 * num1;

    printf("\n Sum and Product of Number %d and %d respectively.",sum,pro); 
    printf("\n");
 
}
