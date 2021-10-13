#include <stdio.h>
void average(int,int,int,int,int);
void main()
 {
    int a,b,c,d,e;
    printf("\n Going to calculate the average of five numbers :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    average(a,b,c,d,e);
 }
 void average(int a,int b,int c,int d,int e)
 {
     float avg;
     avg=(a+b+c+d+e)/5;
     printf("The avg of the given five number :%f",avg);
 }


output

 Going to calculate the average of five numbers :1 2 3 4 5
The avg of the given five number :3.000000
