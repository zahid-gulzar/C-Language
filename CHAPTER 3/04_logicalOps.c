#include<stdio.h>

int main()
{
    int a = 0; // False
    int b = 1; // True

    printf("The value of a and b is: %d\n", a && b); // False
    printf("The value of a and b is: %d\n", a || b); // True
    printf("The value of not(a) is: %d\n", !a); // 0

    return 0;
}