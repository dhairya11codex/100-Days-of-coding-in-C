#include <stdio.h>
int main()
{
    int x ;
    printf("Enter the number : ");
    scanf("%d",&x);
    float sum= x * (x + 1) / 2 ;
    printf("Sum = %f", sum);
    return 0 ;


}