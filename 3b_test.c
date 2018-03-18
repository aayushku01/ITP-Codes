#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct network
{
	char name[50];
	int id;
	int *commom;
	//common = (int *) malloc(sizeof(int));
};

int main()
{
	int count,id;
	struct network arr[16];
	char line,name[100];
	int i = 0;

	FILE *ptr;

	if ((ptr=fopen("Network.txt","r"))==NULL)
	{
		printf("There is no file at the location specified\n");
		exit(1);
	}

	while(!feof(ptr)){

		line = fgetc(ptr);
		
		if (((int)line != 32 ) && ( (line>='a' && line<='z') || (line>='A' && line<='Z'))){
			name[i] = line;
			i++;
		}

		if (line == "\0")
		{
			name[i] = " ";
			i++;
		}



		//printf("\n");
		

		/*while((&line[count] != " " ) && ( (line[count]>='a' && line[count]<='z') || (line[count]>='A' && line[count]<='Z')) ){
			printf("%s", &line[0]);
			count++;
		}*/
		//printf("%s\n", name);

	}

	printf("%s\n", name );

	fclose(ptr);
	printf("\n");


	return 0;
}