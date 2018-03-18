#include<stdio.h>
#include<stdlib.h>

int main(){

	int a[2][3][4];
	int i,j,k;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 4; ++k)
			{
				printf("%p\n", &a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}


}