#include <stdio.h>
const float add=0.5;

int main(void)
{
    float v;
    scanf("%f",&v);
    v=v+add;
    v=(int)v;
    printf("the rounded value is %.2f",v);
    
    return 0;
}
