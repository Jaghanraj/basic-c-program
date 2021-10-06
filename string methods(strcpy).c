#include <stdio.h>
#include <string.h>

int main()
{
 char a[40]="String 1";
 char b[40]="String 2 : i'm gonna copied into a";
 strcpy(a,b);
 printf("String a is :%s",a);
   return 0;
}

output

String a is :String 2 : i'm gonna copied into a
