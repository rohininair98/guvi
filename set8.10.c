#include <stdio.h>

int main()
{
  int num,rem,odd=0,digit;
  scanf("%d",&num);
  while(num>0)
  {
      digit=num%10;
      num=num/10;
      rem=digit%2;
      if(rem!=10)
      {
          printf("%d",digit);
      }
      
  }
return 0;
}
