#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    

    return 0;
}
