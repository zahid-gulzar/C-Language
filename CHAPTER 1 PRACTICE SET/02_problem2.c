/* Program to Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height
*/

#include<stdio.h>

int main()
{
    // Area of circle
    int radius = 6;
    printf("The area of the circle with radius %d is %f\n", radius, 3.14*radius*radius);

    // Now modify to calculate volume of cylinder
    int height = 10;
    printf("The volume of the cylinder with radius %d and height %d is %f", radius, height, 3.14*radius*radius);

    return 0;
}