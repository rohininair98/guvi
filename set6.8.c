#include <stdio.h>

int main()
{
    int n,k,a[50],count=0,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
