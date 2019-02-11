#include <stdio.h>

int main()
{
   char n[100];
   int flag=0,i,count;
   scanf("%s",&n);
   count=strlen(n);
   for(i=0;i<n;i++)
   {
       if(n[i]=='0'||n[i]=='1')
       {
           flag=1;
       }
       else
       {
           flag=0;
           break;
       }
   }
   if(flag==1)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }

    return 0;
}
