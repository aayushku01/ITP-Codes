#include <stdio.h>
#include <stdlib.h>

int sumf(int);

int main()
{
	int n,sum = 0,num;
	
	scanf("%d",&n);

	sumf(n);
}

int sumf(int n){
	int sum = 0,num;
	
	for (int i = 0; i < n; ++i)
	{
		printf("Enter the %d number\n", i+1);
		scanf("%d",&num);
		sum += num;
	}
	printf("%d\n", sum);
}