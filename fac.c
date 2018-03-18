#include<stdlib.h>
#include<stdio.h>

int main()
{
    
    int n;
    long long fac = 1;

    scanf("%d",&n);

    for (int j=1; j <= n; j++)
	{
    	fac = fac*j;
    	//printf("%lld\n",j );
    }

    printf("%lld\n", fac);

}