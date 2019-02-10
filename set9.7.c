#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
scanf("%d%d",&a,&b);
while(a!=b)
{
if(a>b)
{
a=a-b;
}
else
{
b=b-a;
}
}
printf("%d",a);
return 0;
}
