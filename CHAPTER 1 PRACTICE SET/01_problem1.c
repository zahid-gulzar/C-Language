// Program to calculate area of Rectangle

#include <stdio.h>

int main()
{
    // Using hard coded inputs
    // int length = 3;
    // int breadth = 6;
    // printf("The area of rectange with length %d and breadth %d is %d", length, breadth, length * breadth);

    // Using inputs supplied by the user
    int length;
    int breadth;

    printf("Enter the length of rectange: ");
    scanf("%d", &length);

    printf("Enter the breadth of rectange: ");
    scanf("%d", &breadth);

    printf("The area of the rectange with length %d and breadth %d is %d", length, breadth, length*breadth);
    
    return 0;
}