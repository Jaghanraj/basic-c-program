#include <stdio.h>
int square();
void main()
{
 printf("Going to calculate the area of square :\n");
 float area=square();
 printf("The area of square :%f\n",area);
}
int square()
{
    float side;
    printf("Enter the length of the side in meters :");
    scanf("%f",&side);
    return side*side;
}


output


Going to calculate the area of square :
Enter the length of the side in meters :5
The area of square :25.000000
