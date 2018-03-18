#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
system("clear");

char string[1000];

int max,hist[5] = {0,0,0,0,0};

printf("Enter a string\n");
gets(string);

for (int i = 0; i < strlen(string); ++i)
{
    if (string[i] == 'a' || string[i] == 'A' )
    {
        hist[0]++;
    }else if (string[i] == 'e' || string[i] == 'E' )
    {
        hist[1]++;
    }else if (string[i] == 'i' || string[i] == 'I' )
    {
        hist[2]++;
    }else if (string[i] == 'o' || string[i] == 'O' )
    {
        hist[3]++;
    }else if (string[i] == 'u' || string[i] == 'U' )
    {
        hist[4]++;
    }
}

//printf("%d\t%d\t%d\t%d\t%d\n",hist[0],hist[1],hist[2],hist[3],hist[4]);

max = hist[0];

for (int i = 1; i < 5; ++i)
{
    if (hist[i]>max)
    {
        max = hist[i];
    }
}

for (int i = 0; i < 5; ++i)
{
    hist[i] = max - hist[i];
}

for (int i = 0; i < max; ++i)
{
    if (hist[0]>0)
    {
        printf("   ");
        hist[0]--;
    }else if (hist[0]<=0)
    {
        printf("*  ");
        hist[0]--;
    }
    if (hist[1]>0)
    {
        printf("   ");
        hist[1]--;
    }else if (hist[1]<=0)
    {
        printf("*  ");
        hist[1]--;
    }
    if (hist[2]>0)
    {
        printf("   ");
        hist[2]--;
    }else if (hist[2]<=0)
    {
        printf("*  ");
        hist[2]--;
    }
    if (hist[3]>0)
    {
        printf("   ");
        hist[3]--;
    }else if (hist[3]<=0)
    {
        printf("*  ");
        hist[3]--;
    }
    if (hist[4]>0)
    {
        printf(" ");
        hist[4]--;
    }else if (hist[4]<=0)
    {
        printf("*");
        hist[4]--;
    }
printf("\n");
}
printf("A  E  I  O  U\n");

}