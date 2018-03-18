#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

double evaluatePoly(double P[],int n,double x);

int main(){
	int n,iter=0;
	double x1,x2,x3,tolerance = 0.00001;
	double slope,error;
	double x3prev = 0;

	x1 = -1;
	x2 = 1;

	printf("Enter degree of Poly\n");
	scanf("%d",&n);

	double P[n+1];

	for (int i = 0; i < n+1; ++i)
	{
		printf("Enter value of a%d : ", i );
		scanf("%lf",&P[i]);
	}

	if (evaluatePoly(P,n,0.0)==0)
	{
		printf("Real Root of Polynomial : %.2lf\n", 0.0);
		exit(0);
	}

	if (evaluatePoly(P,n,x1)==0)
	{
		printf("Real Root of Polynomial : %.2lf\n", x1);
		exit(0);
	}else if (evaluatePoly(P,n,x2) == 0){
		printf("Real Root of Polynomial : %.2lf\n", x2);
		exit(0);
	}


	while(error>tolerance || iter<2){
		iter++;
		slope = (evaluatePoly(P,n,x1)-evaluatePoly(P,n,x2))/(x1-x2);
		x3 = (x1 - (evaluatePoly(P,n,x1)/slope));
		x1 = x2;
		x2 = x3;
	
		error = fabs(x3 - x3prev);
		x3prev = x3;
		if (isinf(x3))
		{
			printf("No Real Root Exists.\n");
			exit(1);
		}
		if (n%2 == 0){		
			if (iter == 1000)
			{
				printf("No Real Root Exists.\n");
				exit(1);
			}
		}
	}
	printf("Real Root of Polynomial : %.2lf\n", x3);
	}
	
double evaluatePoly(double P[],int n,double x){
	double value= 0;
	for (int i = 0; i < n+1; ++i){
		value = value + (P[i]*pow(x,i));
	}
}
