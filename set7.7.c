#include <stdio.h>

void main()
{
   int n,rem;
   scanf("%d",&n);
   rem=n%10;
   n=n-rem;
   n=n+10;
   printf("%d",n);
   getch();
}
