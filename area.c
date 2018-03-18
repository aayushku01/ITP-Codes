#include<stdio.h>
#define PI 3.1416
int main()
{
    float num1;
    
    printf("\n Enter a radius: ");
    scanf("%f",&num1);

    printf("Your area is %f and circumfrence is %f \n",(PI*(num1*num1)),(2*PI*num1));
    return 0;
}
