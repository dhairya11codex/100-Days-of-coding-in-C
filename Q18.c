#include <stdio.h>
int main()
{
    int per;
    printf("Enter percentage : ");
    scanf("%d",&per);

    if (per == 100 && per >= 90)
    {
        printf("Grade A");
    }
    else if ( per >=80 && per <= 89)
    {
        printf("Grade B");
    }

    else if ( per >= 70 && per <=79)
    {
        printf("Grade C");

    }
    else if ( per >= 60 && per <= 69)
    {
        printf("Grade D");
    }

    else
    {
        printf("Grade F");
    }
    return 0;
}