#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("clear");
    int N,reverse=0;

    printf("Enter N\n");
    scanf("%d",&N);

    while(N>0){
        int r = N%10;
        reverse = reverse*10 + r;
        N /= 10;
    }
    printf("%d\n", reverse);
 }
