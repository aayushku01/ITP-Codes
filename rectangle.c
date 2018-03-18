#include <stdio.h>
#include <stdlib.h>

void rec(int , int);

int main()
{
	int n,m,i=1;
	
	scanf("%d %d",&n,&m);

	rec(n,m);

}

void rec(int n , int m)
{
	int i=1;
	while (i<=n){
		if (i==1)
		{
			for (int j = 0; j < m; ++j)
			{
				printf("*");
			}
			printf("\n");
		}else if (i==n)
		{
			for (int j = 0; j < m; ++j)
			{
				printf("*");
			}
			printf("\n");
		}else
		{
			printf("*");
			for (int j = 0; j < m-2; ++j)
			{
				printf(" ");
			}
			printf("*\n");

		}
		i++;

	}

}