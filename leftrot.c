#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,shift;
	char input[50],swap;

	printf("Enter The Word\n");
	scanf("%s",input);

	printf("Enter the shift value\n");
	scanf("%d",&shift);

	n = strlen(input);

	shift = (shift % n);

	for (int i = 0; i < shift; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			swap = input[j];
			input[j] = input[j+1];
			input[j+1] = swap;  
		}
	}

	printf("%s\n",input );

	printf("%d\n",(113>>4) );

}
