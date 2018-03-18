#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

double evaluatePoly(double P[],int n,double x);
int main(){
	int n;
	double x;
	printf("Enter degree of Poly\n");
	scanf("%d",&n);
	double P[n+1];
	for (int i = 0; i < n+1; ++i){
		printf("Enter value of a%d : ", i );
		scanf("%lf",&P[i]);
	}
	printf("Enter value of x\n");
	scanf("%lf",&x);
	evaluatePoly(P,n,x);
}

double evaluatePoly(double P[],int n,double x){
	double value= 0;
	for (int i = 0; i < n+1; ++i){
		value = value + (P[i]*pow(x,i));
	}
	printf("The value of Poly at %lf : %lf\n", x, value);
}
