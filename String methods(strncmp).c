 
#include <stdio.h>

int main()
{
   char a[20] ="Beginers book";
   char b[20] ="Beginers book.com";
   if(strncmp(a,b,8)==0)
   {
       printf("string 1 and string 2 are equal");
   }
   else
   {
       printf("String 1 and string 2 are different");
   }
   return 0;
}

output

string 1 and string 2 are equal
