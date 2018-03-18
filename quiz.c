#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");
    int score=0;
    char a[1];
    char choice[10] = "F";

    printf("Welcome To The Game Known as Game Of Life \nYou will Have 2 Questions and 4 Choices For Each Questions \n");
    
    printf("Get Ready For Your 1st Question\n");

    printf("Who is The President Of USA?\n");
    printf("A) Barack Obama \t\t B) George Bush\nC) Donald Trump \t\t D) William H. Taft\n");

    
    printf("\nEnter Your Choice\n");
    scanf("%s",choice);

    if (choice[0] =='c')
    {
        printf("\nYou Got It Right.\n");
        score = score+1;
    }else
    {
        printf("Sorry Wrong Answer.\n");
    }
        

    printf("\n\nGet Ready For 2nd Questions\n");

    printf("Who is The Present RBI Governer ?\n");
    printf("A) Raghuram Rajan \t B) Urjit Patel\nC) D. Subbarao \t\t D) Bimal Jalan\n");

    
    printf("\nEnter Your Choice\n");
    scanf("%s",choice);
    if (choice[0] == 'b')
    {
        printf("You Got It Right.\n");
        score = score+1;
    }else
    {
        printf("Sorry Wrong Answer.\n");
    }
    
    printf("\nYour Final Score : ");
    printf("%d \n", score );
 }