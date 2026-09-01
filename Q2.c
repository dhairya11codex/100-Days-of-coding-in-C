#include <stdio.h>
int main()
{
    float x;
    printf("\n Enter the value of first number : ");
    scanf("%f",&x);

    float y; 
    printf("\n Enter the value of second number : ");
    scanf("%f",&y);

    float sum = x+y ;
    float sub = x-y ;
    float mul = x*y ;
    float div = x/y ;
    
    printf("\nThe value of sum is : %f", sum);
    printf("\nThe value of sub is : %f", sub);
    printf("\nThe value of mul is : %f", mul);
    printf("\nThe value of div is : %f", div);

    return 0;

    
}
