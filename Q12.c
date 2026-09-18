#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ",x);
    scanf("%d",&x);


    if ( x >= 0)
    {
        if (x == 0)
        {
            printf("Zero");

        }
        else
        {
            printf("Positive");
        }
    }
    else
    {
        printf("Negative");

    }
    return 0;
}