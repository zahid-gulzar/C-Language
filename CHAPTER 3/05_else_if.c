#include<stdio.h>

int main()
{
    int age = 20;

    if(age > 25 && age < 40) // Not executed..!
    {
        printf("You can drive and you are elder");
    }
    else if(age > 40) // Not executed..!
    {
        printf("Oh, You are a senior citizen! You can drive"); 
    }
    else if(age > 18) // Executed...
    {
        printf("You can drive");
    }
    else // Not executed..!
    {
        printf("You cannot drive");
    }

    return 0;
}