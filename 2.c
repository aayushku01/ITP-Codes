#include<stdio.h>
#include<stdlib.h>


int	main(){

int n,c;
char ans[1];

printf("Enter the size of array\n");
scanf("%d",&n);

int a[n];

for (int i = 0; i < n; ++i)
{
	printf("Enter a[%d]\n", i);
	scanf("%d",&a[i]);
}

printf("At any time if your number is equal type 'e' \n");

c = n/2;

printf("Is your Number Greater than %d (y/n) : ",a[c] );
scanf("%s",ans);

if (ans[0] == 'y' || ans[0] == 'Y')
{
	c = c/2;
}else if (ans[0] == 'n' || ans[0] == 'N')
{
	c = c/2; 
}else if (ans[0] == 'e' || ans[0] == 'E')
{
	printf("Your Number is %d",a[c]);
	exit(0);
} 

while(c>0){

printf("Is your Number Greater than %d (y/n) : ",a[c] );
scanf("%s",ans);

if (ans[0] == 'y' || ans[0] == 'Y')
{
	c = (c + 2*c)/2;
}else if (ans[0] == 'n' || ans[0] == 'N')
{
	c = c/2;
}else if (ans[0] == 'e' || ans[0] == 'E')
{
	printf("Your Number is %d\n",a[c]);
	exit(0);
}

}

}

