#include <stdio.h>
#include <string.h>

int main()
{
    char a[20]="\tHello";
    char b[20]="World";
 strcat(a,b);
 printf("Output string after concotenation:%s",a);
   return 0;
}


output

Output string after concotenation:      HelloWorld
