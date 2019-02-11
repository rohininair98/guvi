#include <stdio.h>

int main()
{
    int selectedno=-1;
    while(1)
    {
        scanf("%d",&selectedno);
        if(selectedno<=1||selectedno>=10)
        {
            printf("not valid");
        }
        else
        {
            printf("valid");
            break;
        }
    }
    return 0;
}
