#include <stdio.h>
int main()
{
   char text[100];
   int i;
   int countL,countU,countS;
   printf("Enter any string :");
   gets(text);
   printf("Entered string is :%s\n",text);
   countL=countU=countS=0;
   for(i=0;text[i]!='\0';i++)
   {
       if((text[i]>='A' && text[i]<='Z')||(text[i]>='a' && text[i]<='z'))
       {
           if(text[i]>='A' && text[i]<='Z')
           {
               countU++;
           }
           
           else
           {
               countL++;
           }
       }
       
       else
       {
           countS++;
       }
   }
   printf("uppercase charecters :%d\n",countU);
   printf("lowercase charecters :%d\n",countL);
   printf("specialcase charecters :%d\n",countS);
   return 0;
}

output

Entered string is :HelloC
uppercase charecters :2
lowercase charecters :4
specialcase charecters :0
