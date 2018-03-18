#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bit(int n,int num){

	if ( (num&(int)(pow(2,n-1))) == pow(2,n-1))
	{
		printf("Bit is One\n");
	}else{
		printf("Bit is Zero\n");
	}
}

int main()
{
	int n,num;
	printf("Enter  2 Number\n");
	scanf("%d %d",&num,&n);

	bit(n,num);

}