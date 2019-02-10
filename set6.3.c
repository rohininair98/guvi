#include <stdio.h>

void main()
{
    long num,temp,digit,sum=0;
    printf("enter the number\n");
    scanf
    ("%ld",&num);
    temp=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num/=10;
    }
    print("given number=%ld\n",temp);
    printf("sum of the digit %ld=%ld\n",temp,sum);
    }
    

    getch();
}
