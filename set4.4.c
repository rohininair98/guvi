#include<stdio.h>
#include<conio.h>
int main()
{
char a[50];
int i,count=1;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
count++;
}
}
printf("%d",count);
return 0;
}
