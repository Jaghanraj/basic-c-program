#include <stdio.h>
#include<string.h>
int
main ()
{
    char str1[100],str2[100];
    int result,i;
    i=0;
    printf("\nplease enter the first string :");
    scanf("%s",str1);
    printf("\nPlease enter the second string :");
    scanf("%s",str2);
    while(str1[i]==str2[i] && str1[i]=='\0')
    i++;
    if(str1[i]<str2[i])
    {
        printf("\nstr1 is less than str2");
    }
    else if(str1[i]>str2[i])
    {
        printf("\nstr2 is less than str1");
    }
    else
    {
        printf("\n str1 is equal to str2");
    }
 
  return 0;
}

output

please enter the first string :hello

Please enter the second string :hello

 str1 is equal to str2
