#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printIntersection(int a[],int b[],int *c,int n,int m);

struct network
{
	char name[20];
	int id;
	int *friends;
	int nooffriends;

}arr[16];

int main()
{
	int count ,id,j=0;
	char line[50],name[20];
	char *token ;
	
	int input1=0,input2=0;
	int *c;
	FILE *ptr;
	//opening file
	if ((ptr=fopen("Network.txt","r"))==NULL)
	{
		printf("There is no file at the location specified\n");
		exit(1);
	}
	
	char absd[5];	
	
	//scanning name ID Friends ID
	for (int i = 0; i < 16; ++i)
	{
		fscanf(ptr, "%*s %s %d: %s",name,&id,line);		//Scanning name id and rest all in line
		strcpy(arr[i].name , name);			
		arr[i].id = id;
		
		size_t indexOfNullTerminator = strlen(line);	//removing "." from end of line by replacing it by null terminator.
    		line[indexOfNullTerminator - 1] = '\0';		

    		arr[i].friends = (int *)malloc((j+1)*sizeof(int));	//declaring size of friends array
		token = strtok(line, " ,");				//cutting line in diffrent parts with "," as delimiter


		while (token != NULL){
            		arr[i].friends = realloc(arr[i].friends,(j+1)*sizeof(int));
		        count = atoi(token);				//converting char to int
	        	//printf("%d\n", count);
    	    		arr[i].friends[j] = count;
    	    		token = strtok(NULL, ",");
    			j++;
    		}
    		arr[i].nooffriends = j;
    		j = 0;
	}

	fclose(ptr);	

	printf("Enter Id 1 (10-25): ");
	scanf("%d",&input1);
	while(input1<10 || input1 >25){
		printf("Please Enter again\n");
		scanf("%d",&input1);

	}
	printf("Enter Id 2 (10-25): ");
	scanf("%d",&input2);
	while(input2<10 || input2>25){
		printf("Please Enter again\n");
		scanf("%d",&input2);

	}
	printIntersection(arr[input1-10].friends,arr[input2-10].friends,c,arr[input1-10].nooffriends,arr[input2-10].nooffriends);
}

void printIntersection(int a[],int b[],int *c,int n,int m){

int k = 0;
c = (int *) malloc(sizeof(int));
//intersection of array
for (int i = 0; i < n; i++){
	for (int j = 0; j < m; j++){
		if (a[i] == b[j]){
			k++;
			c = realloc(c, k*sizeof(int));
			c[k-1] = a[i];
			//printf("%d\n", a[i]);
		}
	}
}
//removing duplicate elements from intersection of array.
for (int i = 0; i < k; i++){
	for (int j = i+1; j < k;){
		if (c[i] == c[j]){
			for (int l = j; l < k; l++){
				c[l] = c[l+1];
			}
			k--;
			c = realloc(c, k*sizeof(int));
		}else{
			j++;
		}
	}
}

//printing ID of common of friends
/*for (int i = 0; i < k; i++){
	printf("%d ", c[i]);
}
printf("\n");
*/

if (k == 0)
{
	printf("No Common Friends\n");
	exit(0);
}else{
	printf("Common Friend(s) - ");
	for (int i = 0; i < k; ++i){	
	printf("%s\t",arr[c[i]-10].name);
	}
	printf("\n");
}


}
