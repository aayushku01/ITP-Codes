#include<stdio.h>
#include<stdlib.h>

struct point
{
	double x,y;
	
};

int	main(){

struct point p1,p2;

printf("Enter x coordinate  of p1 \n" );
scanf("%lf", &p1.x);
printf("Enter y coordinate  of p1 \n" );
scanf("%lf", &p1.y);

printf("Enter x coordinate  of p2 \n" );
scanf("%lf", &p2.x);
printf("Enter y coordinate  of p2 \n" );
scanf("%lf", &p2.y);

printf("%lf\n", p1.x );

}