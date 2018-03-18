#include<stdlib.h>
#include<stdio.h>

int main()
{
    
    int n[8]={};
    int max=0;

    for (int i = 0; i < 8; ++i)
    {
    	scanf("%d",&n[i]);
    }

	for (int i = 0; i < 8; ++i){
    	if (n[i]>max)
    	{
    		max=n[i];
    	}
    }
    printf("%d\n",max );

}
