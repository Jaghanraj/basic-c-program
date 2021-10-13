#include <stdio.h>
void sum();
void main()
{
 printf("\n Going to calculate the sum of two numbers :");
 sum();
}
void sum()
{
    int a,b;
    printf("\n Enter the two numbers :");
    scanf("%d%d",&a,&b);
    printf("The sum is %d",a+b);
}


output


 Going to calculate the sum of two numbers :
 Enter the two numbers :5 5
The sum is 10
