#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
    
	//char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char input[50];
	int n;

	printf("Enter String\n");
	scanf("%s",input);

	printf("Enter n\n");
	scanf("%d",&n);

	for (int i = 0; i < strlen(input); ++i)
	{
		if (input[i]<91 && input[i]>64){
			input[i] += (n%26);
			if (input[i]>91)
			{
				input[i] -= 26;
			}
			if (input[i]<64)
			{
				input[i] += 26;
			}
		}else	if (input[i]<122 && input[i]>96){
			
			input[i] += n;
			if (input[i]>122){
				input[i] -= 26;
			}
			if (input[i]<97){
				input[i] += 26;
			}
		}
	
	}
	printf("%s\n", input);

	}
