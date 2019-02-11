#include <stdio.h>

int main()
{
    int n,i;
    char a[1000];
    scanf("%d",&n);
    scanf("%s",&a);
    for(i=0;i<n;i++);
    {
        printf("%c",a[i]);
    }

    return 0;
}
