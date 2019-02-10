#include <stdio.h>

int main()
{
   int n,reversednumber=0,rem;
   scanf("%d",&n);
   while(n!=0)
   {
       rem=n%10;
       reversednumber=reversednumber*10+rem;
       n/=10;
   }
   printf("reversednumber=%d",reversednumber);
   return 0;
}
