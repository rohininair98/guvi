#include<stdio.h>
#include<conio.h>
int main()
{
char a[20];
int n;
clrscr();
gets(a);
scanf("%d",&n);
while(n)
{
printf("%s",a);
n--;
printf("\n");
}
return 0;
}
