// Write a program to check whether a number is divisible by 97 or not

#include<stdio.h>

int main()
{
    int a = 232321;

    printf("The value of %d%97 is: %d", a, a%97); // If the output is zero then this number is divisible by 97

    return 0;
}