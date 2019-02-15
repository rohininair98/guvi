#include <stdio.h>
int main()
{
int num,count=0,i;
scanf("%d",&num);
for(i=0;i<=num;i++)
{
    count=count+i;
}
printf("%d",count);
   return 0;
}
