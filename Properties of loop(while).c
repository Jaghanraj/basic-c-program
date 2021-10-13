#include <stdio.h>
void
main ()
{
  int j=1;
  while(j+=2,j<=10)
  {
      printf("%d\n",j);
  }
  printf("%d\n",j);
}


output

3
5
7
9
11
