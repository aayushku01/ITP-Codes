#include<stdlib.h>
#include<stdio.h>

int main()
{
    int year=0,date=0,month=0,day,leap,ddmmyyyy;
	int month_days[12] = {0,31,59,90,120,151,181,212,243,273,304,334};
  	while(year<=0){
		printf("Enter A Year \n");
			
	   	if(scanf("%d",&year)!=1) {printf("Sorry\n"); return 0;}
	}
  	while(month <=0 || month>12){
        printf("Enter A Month(1-12)\n");
        if(scanf("%d",&month)!=1) {printf("Sorry\n"); return 0;}        
        }

  	if (( (year%4) == 0 && ( (year%400) == 0 || (year%100) !=0 )) && month == 2 ){     //For leap year's feb
  		while(date <=0 || date>29){
  		  printf("Enter A Date(1-29) \n");
   		  if(scanf("%d",&date)!=1) {printf("Sorry\n"); return 0;}  			
  		}
  	}else if (( (year%4) == 0 && ( (year%400) != 0 || (year%100) ==0 )) && month == 2 ){   //For non-leap year's feb
           while(date <=0 || date>28){
             printf("Enter A Date(1-28) \n");
	     if(scanf("%d",&date)!=1) {printf("Sorry\n"); return 0;}  			
           }
        }else{                                                                                // Rest Of the year
  	   if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
              while(date <=0 || date>31){
                printf("Enter A Date(1-31) \n");
                if(scanf("%d",&date)!=1) {printf("Sorry\n"); return 0;}  			
              }
           }else if (month == 4 || month == 6 || month == 9 || month == 11 ){
              while(date <=0 || date>30){
                printf("Enter A Date(1-30) \n");
                if(scanf("%d",&date)!=1) {printf("Sorry\n"); return 0;}
              }
           }else if (month == 2){
              while(date <=0 || date>28){
                printf("Enter A Date(1-28) \n");
                if(scanf("%d",&date)!=1) {printf("Sorry\n"); return 0;}
              }
            }
        }

    leap = ( ((year-1)/4) - ((year-1)/100) + ((year-1)/400) );
    day = ((year-1-leap)*365+(leap)*366);	//No. of days till Jan 1 "year"

    //printf("%d\n",leap );
    //printf("%d\n",day );

    if (( (year % 4) != 0 ) || ( (year%4) == 0 && ( (year%400) != 0 || (year%100) ==0 )) )
    {
    	day = day + month_days[month-1] + date - 1 ;
    }
    else if ( (year%4) == 0 && ( (year%400) == 0 || (year%100) !=0 ))
    {
    	month_days[2] = 60;
      day = day + month_days[month-1] + date - 1;
      month_days[2] = 59;
    }
    
    //printf("%d\n", day);

    day = day%7;

    if (day == 0){printf("Monday\n");}
    else if (day == 1){printf("Tuesday\n");}
    else if (day == 2){printf("Wednesday\n");}
    else if (day == 3){printf("Thrusday\n");}
    else if (day == 4){printf("Friday\n");}
    else if (day == 5){printf("Saturday\n");}
    else if (day == 6){printf("Sunday\n");}
}
