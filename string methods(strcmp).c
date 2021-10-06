 #include <stdio.h>
#include<string.h>

int main()
{
    char a[20] = "Beginers book";
    char b[20] = "Beginers book.com";
    if(strcmp(a,b)==0)
    {
        printf("String 1 and String 2 are equal");
    }
    else
    {
        printf("String 1 and String 2 are different");
    }
    return 0;
   
    
}

output

String 1 and String 2 are different
