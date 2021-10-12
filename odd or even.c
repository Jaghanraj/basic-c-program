#include <stdio.h>
int
main ()
{
  char c;
  int lowercaseVowel, uppercaseVowel;
  printf ("Enter an alphabet :");
  scanf ("%c", &c);
  lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
  if (lowercaseVowel || uppercaseVowel)
    printf ("%c is a vowel", c);
  else
    printf ("%c is a consonant", c);
  return 0;
}

output

Enter an alphabet :u
u is a vowel
