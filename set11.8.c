#include <stdio.h>

int main()
{
   int a[10],i,j,n,index=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   i=0;
   j=n-1;
   while(i!=j)
   {
       if(a[i]<a[j])
       {
           j--;
           index=i;
       }
       else
       {
           i++;
           index=j;
       }
   }
   printf("%d\n",a[index]);
   system("pause");
 
   return 0;
}
