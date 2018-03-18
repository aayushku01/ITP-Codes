#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("clear");
    int N,count=0;

    printf("Program to print squares up to N \n");

    printf("Enter N\n");
    scanf("%d",&N);

    /*for (int i = 1; i*i <= N; i++)
    {
    count++;
    }*/    

    //printf("%d\n", count);

    for (int i = 1,j = 0; i*i <= N; i++)
    {
        printf("%d\t", i*i);
        /*if (i*i <= N && j < count-1)
        {
            
            printf(",");
        }
        j++;
        if (j == count)
        {
            printf(".");
        }*/
    }
    printf("\n");
 }
