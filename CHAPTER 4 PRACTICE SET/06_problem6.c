// Program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main()
{
    int n = 5;
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial of a number %d is: %d\n", n, factorial);

    return 0;
}