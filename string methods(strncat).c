#include <stdio.h>
#include <string.h>

int main()
{
    char a[20]="\tHello";
    char b[20]="World";
 strncat(a,b,3);
 printf("Output string after concotenation:%s",a);
   return 0;
}


output

Output string after concotenation:      HelloWor
