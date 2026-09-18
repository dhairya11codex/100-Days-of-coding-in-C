#include <stdio.h>
int main()
{
    char c;
    printf("Enter input: ");
    scanf("%c",&c);

    if ( c >= 'A' && c <= 'Z')
    {
        printf("Uppercase alphabet");
    
    }
    else if ( c >= 'a' && c <= 'z')
    {
        printf("Lowercase alphabet");

    }
    else if ( c >= 0 && c <= 9)
    {
        printf("Digit");

    }
    else
    { 
        printf("special character");
    }
    return 0;
    
}