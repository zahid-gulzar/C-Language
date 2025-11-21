#include<stdio.h>

int main()
{
    // Int to Int
    int a = 9;
    int b = 2;
    float c = a /b;

    printf("The value of %d/%d is: %f\n", a, b, c); // Result: 4.0000

    float d = 9;
    float e = 2;
    float f = d /e;

    printf("The value of %f/%f is: %f\n", d, e, f); // Result: 4.50000

// Quick Quiz: int k = 3.0 /9; value of k? and why? 


    // Type Casting 
    int n = 45;
    float m = 32.24;

    n = (int) m;

    printf("The value of %f after type casting is: %d", m, n);

    return 0;
}