#include <stdio.h>

int main()
{
    float l,b,h;
    float surface,volume;
    scanf("%f%f%f",&l,&b,&h);
    surface=2*(b*l+l*h+h*b);
    volume=b*l*h;
    printf("%3f",surface);
    printf("%3f",volume);

    return 0;
}
