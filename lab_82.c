#include <stdio.h>
#include <stdlib.h>

void swap(double *a,double *b);
void bubble_sort(double a[],int n);

int main(){

	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);

	double a[n];

	for (int i = 0; i < n; ++i)
	{
		printf("Enter element %d\n", i+1 );
		scanf("%lf",&a[i]);
	}

	bubble_sort(a,n);

	for (int i = 0; i < n; ++i)
	{
		printf("%lf  ", a[i]);
	}
	printf("\n");


}

void swap(double *a,double *b){
double temp;

temp = *a;
*a = *b;
*b = temp; 
}

void bubble_sort(double a[],int n){

int swaper = 0;

for (int i = 0; i < n; ++i){
	for (int j = 0; j < n-1-i; ++j){
		if (a[j] > a[j+1]){
			swap(&a[j],&a[j+1]);
			swaper += 1;
		}
	}
	if (swaper == 0){
		break ;
	}
	swaper = 0;
}
}