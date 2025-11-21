#include<stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a + b;
    
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);

    // Modulus operator is used to get the remainder
    printf("The remainder when %d is divided by %d is: %d", a, b, a%b);

    // There is no operator to perform exponentiation in C however we can use pow (x,y) from <math.h> (more later)

    return 0;
}