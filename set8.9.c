#include <stdio.h>

int main()
{
  int n,i,b;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      b=i*i;
  }
  if(b==n)
  {
      printf("perfect square");
  }
  else
  {
      printf("not");
  }
return 0;
}
