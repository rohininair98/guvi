#include<stdio.h>

int main()
{
    char s[1000];
    int c=0,j;
    gets(s);
    for(j=0;s[j]!='\0';j++)
    {
        if(s[j]>='0'&&s[j]<='9')
        {
            c++;
        }
        printf("digits=%d",c);
    }
    return 0;
