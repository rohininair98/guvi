#include<stdio.h>
#include<conio.h>
int main()
{
char a[20];
int i;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
{
printf("%c",a[i]);
}
}
return 0;
}
