#include <stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int i=0,word=0,chr=0;
    printf("enter string");
    gets(str);
    while(str[i])!='\0')
    {
        if(str[i]=='')
        {
            word++;
            chr++;
        }
        else
        {
            chr++;
            i++;    
        }
    }
        printf("%d",chr);

    getch();
}
