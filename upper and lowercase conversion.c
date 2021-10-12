#include <stdio.h>
int
main ()
{
  char text[100];
  int i;
  printf ("Enter any string :");
  gets (text);
  printf ("Entered string is :%s\n", text);
  for (i = 0; text[i] != '\0'; i++)
    {
      if (text[i] >= 'a' && text[i] <= 'z')
	text[i] = text[i] - 0x20;
    }
  printf ("String in uppercase is :%s", text);
  for (i = 0; text[i] != '\0'; i++)
    {
      if (text[i] >= 'A' && text[i] <= 'Z')
	text[i] = text[i] + 0x20;
    }
  printf ("\nString in lowercase is:%s", text);
  return 0;
}

output

Enter any string :aaaaa
Entered string is :aaaaa
String in uppercase is :AAAAA
String in lowercase is:aaaaa
