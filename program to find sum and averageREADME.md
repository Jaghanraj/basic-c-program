PROGRAM TO FIND SUM AND AVERAGE


#include <stdio.h>

int main()
{
    int a,b,sum;
    float avg;
    printf("Enter any integer value for a:");
    scanf("%d",&a);
    printf("Enter any integer value for b:");
    scanf("%d",&b);
    sum=a+b;
    avg= (float)(a+b)/2;
    printf("\nthe sum of %d and %d is: %d",a,b,sum);
    printf("\nthe average of %d and %d is: %f",a,b,avg);
     
 return 0;
}




OUTPUT

Enter any integer value for a:10
Enter any integer value for b:5

the sum of 10 and 5 is: 15
the average of 10 and 5 is: 7.500000
