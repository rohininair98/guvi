#include <stdio.h>

int main()
{
  char a[100],b[100];
  gets(a);
  strcpy(b,a);
  strrev(b);
  if(strcmp(a,b)==0)
  {
      printf("yes");
    
  }
  else
  {
      printf("no");
  }
return 0;
}
