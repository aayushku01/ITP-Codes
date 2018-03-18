#include<stdlib.h>
#include<stdio.h>

int main()
{
    
    int n;
    int reverse = 0;
    scanf("%d",&n);

    while(n>0){
    	reverse = reverse*10 + (n%10);
    	n /= 10;

    }

    printf("%d\n", reverse);

    while(reverse>0){
    	printf("%d", reverse%2);
    	reverse /= 2; 
    }
    printf("\n");
}
