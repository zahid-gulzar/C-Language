// Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1 

#include<stdio.h>

int main()
{
    int x=2, y=3, z=3, k=1;
    float e = 3*x/y - z+k;

    printf("The value of e is: %f", e); // 0.000000

    return 0;
}

// Steps: 

// Expression is: 3 * x / y - z + k
// Put values

// 3 * 2 / 3 - 3 + 1
// Now solve: 

// 6 / 3 - 3 + 1
// 2 - 3 + 1
// -1 + 1
// 0

// Because of float data type final result is: 0.000000 not only 0