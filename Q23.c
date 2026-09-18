#include <stdio.h>

int main()
{
    int days;
    int fine;
    printf("Enter the number of days : ", days);
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Fine rupees %d", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine rupees %d", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine rupees %d", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }

    return 0;
}