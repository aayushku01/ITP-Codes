#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    double n;
    double x=0;
    long long fac;
    scanf("%lf",&n);

    for (int i = 0; i < 21; i++){
    	fac =1;
    	for (int j=1; j <= i; j++)
    	{
    		fac = fac*j;
    		//printf("%lld\n",j );
    	}
    	x += (pow(n,i))/fac ;
    	//printf("%lf  %lld\n",x,fac);
    }

    printf("e^%lf = %lf\n",n, x);

    x=0;
    for (int i = 1; i < 40; i+=2)
    {
    	x += (pow((n-1)/(n+1),i)/i);
    	//printf("%lf\n",x );
    }

    printf("ln %lf = %lf\n",n,2*x );

    x=0;
    int w = 1;
    long double dummy=1;

    for (int i = 1; i < 41; i++)
    {
    	/*for (int j = 2*i-2; j <= 2*i-1; j++)
		{   	
    		j = j>0 ? j : 1 ;
    		fac *= j;
    	}
    	x += pow(-1,i-1)*(long long )(pow(n,2*i-1))/fac;
    	printf("%lf\n", x);
    	*/

    	dummy *= n/i;
    	i++;
    	x += pow(-1,w-1)*dummy;
    	printf("%lf\n",x );
    	dummy *= n/i;
    	w++;

    }
    printf("%lf\n",x );
}