#include <stdio.h>
#include <stdlib.h>

void printIntersection(int a[],int b[],int n,int m);

int main(){

	int n=0,m=0;
	printf("Enter the size of array 1 : ");
	while(n<=0){
	scanf("%d",&n);
	}
	printf("Enter the size of array 2 : ");
	while(m<=0){
	scanf("%d",&m);
	}
	int a[n];
	int b[m];

	for (int i = 0; i < n; ++i){
		printf("Enter element a[%d] : ", i );
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < m; ++i){
		printf("Enter element b[%d] : ", i );
		scanf("%d",&b[i]);
	}

	printIntersection(a,b,n,m);

}

void printIntersection(int a[],int b[],int n,int m){

int k = 0;
int *c ;
c = (int *) malloc(sizeof(int));


for (int i = 0; i < n; ++i){
	for (int j = 0; j < m; ++j){
		if (a[i] == b[j]){
			k++;
			c = realloc(c, k*sizeof(int));
			c[k-1] = a[i];
		}
	}
}

for (int i = 0; i < k; ++i){
	for (int j = i+1; j < k;){
		if (c[i] == c[j]){
			for (int l = j; l < k; ++l){
				c[l] = c[l+1];
			}
			k--;
			
		}else{
			j++;
		}
	}
}

c = realloc(c, k*sizeof(int));

if(k == 0){
	printf("No Common Elements \n");
}else{

	for (int i = 0; i < k; i++){
		printf("%d ", c[i]);
	}
	printf("\n");
}
}
