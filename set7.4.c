#include <stdio.h>

int main()
{
    int n,m,s;
    scanf("%d%d",&m,&n);
    s=n+m;
    if(s%2!=0)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
  
    return 0;
}
