#include<stdio.h>
#include<stdlib.h>

double matproduct(double a[2][2],double b[2][2]);
void mat_mod(double a[2][2],int e,int n);

int	main(){

double mat[2][2];
int n,e ;


for (int i = 1; i <= 2; ++i){
	for (int j = 1; j <= 2; ++j){
		printf("Enter m[%d][%d] element : \n", i,j );
		scanf("%lf",&mat[i-1][j-1]);
	}
}

printf("Enter power : " );
scanf("%d",&n);

printf("Enter mod : " );
scanf("%d",&e);



matproduct(mat,n);

/*for (int i = 0; i < 2; ++i){
	for (int j = 0; j < 2; ++j){
		printf("%lf\t",mat[i][j]) ;
	}
	printf("\n");
}*/


return 0;

}

double matproduct(double a[2][2],double b[2][2] ){

	double c[2][2];

	c[0][0] = (a[0][0])*(b[0][0])+(a[0][1])*(b[1][0]);
	c[0][1] = (a[0][0])*(b[0][1])+(a[0][1])*(b[1][1]);
	c[1][0] = (a[1][0])*(b[0][0])+(a[1][1])*(b[1][0]);
	c[1][1] = (a[1][0])*(b[0][1])+(a[1][1])*(b[1][1]);

	return c;



}

void mat_mod(double a[2][2],int e,int n){

	double c[2][2];
	if (n == 0)
	{
		for (int i = 0; i < 2; ++i){
			for (int j = 0; j < 2; ++j){
				a[i][j] = 1 ;
			}
		}
	}

	if (n%2 == 1)
	{
		return mat_mod(matproduct(a,mat_mod(a,c,(n-1))))
	}




}