/*
    Write a program to determine whether a character entered by the user is 
    lowercase or not.

    Need help: https://www.ascii-code.com/characters/ascii-alphabet-characters
*/

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any character between A-z: ");
    scanf("%c", &ch);

    if(ch >= 97 && ch <= 122)
    {
        printf("%c is a lowecase character.", ch);
    }
    else
    {
        printf("%c is UPPERCASE character.", ch);
    }

    return 0;
}

// This program is only for alphabets not for special symbols. 