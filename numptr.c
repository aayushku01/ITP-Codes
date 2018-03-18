#include<stdio.h>
#include<stdlib.h>

int main(){

	int num = 50;
	int *ptr1,*ptr2;

	ptr1 = ptr2 =&num;

	printf("%d\n",num );
	printf("%x\t%x\n",ptr1 ,ptr2);

	printf("Enter new number\n");
	scanf("%d",&*ptr1);

	printf("%d\n", *ptr2 );
	printf("%x\n", ptr2);
}
