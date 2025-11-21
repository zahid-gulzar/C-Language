#include<stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value of %d*%d/%d + 7 is: %d\n", a, b, c, a*b/c + 7); // Result: 9
    
    printf("The value of 3*%d/2*%d + 7*%d is: %d", b, c, a, 3*b/2*c +7*a); // Result: 102

    return 0;
}