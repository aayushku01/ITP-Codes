#include<stdlib.h>
#include<stdio.h>

int main()
{
    
    system("clear");

    int year=0,day,leap;

    while (year<1900 || year>2100){
    	printf("Enter A Year Btw 1900 and 2100\n");
    	scanf("%d",&year);
    }

    leap = ((year-1-1900)/4);

    day = ((year-1900)+(leap))%7;

    //printf("%d\n", leap);
    //printf("%d\n", days);

    if (day == 0)
    {
        printf("Monday\n");
    }if (day == 1)
    {
        printf("Tuesday\n");
    }if (day == 2)
    {
        printf("Wednesday\n");
    }if (day == 3)
    {
        printf("Thrusday\n");
    }if (day == 4)
    {
        printf("Friday\n");
    }if (day == 5)
    {
        printf("Saturday\n");
    }if (day == 6)
    {
        printf("Sunday\n");
    }

}
