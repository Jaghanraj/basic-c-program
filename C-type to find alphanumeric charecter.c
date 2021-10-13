
#include <stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a charecter :");
    scanf("%c",&ch);
    if(isalnum(ch))
    printf("%c is an alphanumeric charecter \n",ch);
    else
    printf("%c is not an alphanumeric charecter\n",ch);
    return 0;
}


output

Enter a charecter :A
A is an alphanumeric charecter 
