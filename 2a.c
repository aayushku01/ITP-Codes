#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct point
{
	double x,y;
};

struct line
{
	double m,c;
	
};


int	main(){

struct point p1,p2;
struct line line;

printf("Enter x coordinate  of p1 \n" );
scanf("%lf", &p1.x);
printf("Enter y coordinate  of p1 \n" );
scanf("%lf", &p1.y);

printf("Enter x coordinate  of p2 \n" );
scanf("%lf", &p2.x);
printf("Enter y coordinate  of p2 \n" );
scanf("%lf", &p2.y);

if (p1.y == p2.y && p1.x == p2.x)
{
	line.m = p1.y/p1.x;
	line.c = 0;
}else
{
	line.m = ( p1.y - p2.y ) / ( p1.x - p2.x );
	line.c = ( p1.y - (line.m)*(p1.x) );
	if (isinf(line.m))
	{
		line.m = -1;
		line.c = p1.x;
		printf("0 = %lfx + %lf \n",line.m,line.c );
		exit(0);
	}	
}

printf("y = %lfx + %lf \n",line.m,line.c );

}