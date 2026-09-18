#include <stdio.h>
int main()
{
    int n , i , sum = 0 ;
    printf("Enter how many odd numbers to add :");
    scanf("%d",&n);
    for ( i = 1 ; i <= 2*n ; i++)
    {
        sum = sum + (2*i - 1);
    }
    printf("%d", sum);

    return 0;
}