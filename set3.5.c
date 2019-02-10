#include<stdio.h>
void main()
{
    int a[10],i,n;
    float m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        m=(a[n-1/2]+(a[n/2]))/2;
    }
    else
    {
        m=a[n/2];
    }
    printf("/n median is %f",m);
    

return 0;
}
