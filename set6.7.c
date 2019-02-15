#include <stdio.h>

int main()
{
 int n,p,a,count=0,rem;
 scanf("%d",&n);
 scanf("%d",&p);
 a=n;
 while(a>0)
 {
     rem=a%10;
 if(rem==p)
 {
     count++;
     a=a/10;
 }
 printf("%d",count,n);
 }

    return 0;
}
