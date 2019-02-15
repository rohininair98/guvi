#include <stdio.h>

int main()
{
 char a[100],alph=1,num=1;
 scanf("%s",a);
 int i,m;
 for(i=0;a[i]!='\0';i++)
 {
     m=i;
 }
 for(i=0;i<m;i++)
 {
     if(a[i]<='a'&&a[i]>='z'||a[i]>='A'&&a[i]<='Z')
     {
         alph=1;
     }
     if(a[i]>=1&&a[i]<='9')
     {
         num=1;
     }
 }
 if(alph==1&&num==1)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
    return 0;
}
