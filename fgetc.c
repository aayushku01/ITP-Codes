#include<stdio.h>


int main()
{
    char a[200];

    FILE *out = fopen("capitals.txt", "a");  
    fprintf(out, "\n"); 
    gets(a);

    fprintf(out, "%s", a);  
    fclose(out);  
    return 0;  
}  