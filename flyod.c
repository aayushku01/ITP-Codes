#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
	system("clear");
    int N,i=1,u=1;

    printf("Enter N\n");
    scanf("%d",&N);

    
        for (i; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d\t", u);
                u++;
            }
            printf("\n");
        }
        
        printf("\n");
    
}