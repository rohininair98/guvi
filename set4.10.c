#include<stdio.h>
#include<conio.h>
int main()
{
int n,a=0,b=1,c;
clrscr();
scanf("%d",&n);
printf("%d ",b);
while(n-1)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
n--;
}
return 0;
}

