#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a,b,count=0;

    scanf("%d %d",&a,&b);

    if (a>b)
    {
        int t = b;
        b = a;
        a = t;
    }

    for (int i=2;i<=sqrt(a); i++)
    {
        if (b%i == 0 && a%i ==0)
        {
            count++;
        }
    }

    if (count==0)
    {
        printf("a and b are Co Prime\n");
    }else{
    printf("a and b are not Co Prime\n");
    }
 }