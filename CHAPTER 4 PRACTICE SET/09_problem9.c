// Program to implement problem8.c using ‘while’ and ‘do-while’ loop.

#include <stdio.h>

int main()
{
    // Using wile loop
    int n1 = 4;
    int i = 1, isPrime = 0;

    while (i <= n1)
    {
        if (n1 % i == 0)
        {
            isPrime++;
        }
        i++;
    }

    if (isPrime == 2)
    {
        printf("%d is a prime number\n", n1);
    }
    else
    {
        printf("%d is not a prime number\n", n1);
    }

    // Using do-while loop
    int n2 = 7;
    int j = 1, notPrime = 0;

    do
    {
        if (n2 % j == 0)
        {
            notPrime++;
        }
        j++;
    } while (j <= n2);

    if (notPrime == 2)
    {
        printf("%d is a prime number\n", n2);
    }
    else
    {
        printf("%d is not a prime number\n", n2);
    }

    return 0;
}