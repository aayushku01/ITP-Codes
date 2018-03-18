#include<stdio.h>

int main()
{
    char country1[30],country2[30],capital1[30],capital2[30];
    
    printf("\n Enter the name of country 1 \n");
    scanf("%s",country1);
    printf("\n Enter the name of capital 1 \n");
    scanf("%s",capital1);
    printf("\n Enter the name of country 2 \n");
    scanf("%s",country2);
    printf("\n Enter the name of capital 2 \n");
    scanf("%s",capital2);


    printf("The capitals of %s and %s are %s and %s, respectively. \n",country1,country2,capital1,capital2);
    return 0;
}
