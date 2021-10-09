#include <stdio.h>

int
main ()
{
  char strl[50];
  int i;
  printf ("Enter any string :");
  for (i = 0; i < 10; i++)
    {
      scanf ("%s", &strl[i]);
    }
  printf ("The given string is :");
  for (i = 0; strl[i] != '\0'; i++)
    {
      printf ("%c", strl[i]);
    }
  return 0;
}

output

Enter any string :This is a string
The given string is :This is a string
