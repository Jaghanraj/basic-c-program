#include <stdio.h>
void
main ()
{
  int i = 0, j = 2;
  for (i = 0; i < 5; i++, j += 2)
    {
      printf ("%d%d\n", i, j);
    }
}


output

02
14
26
38
410
