#include <stdio.h>
int main ()
{
    float x ;
    printf("\nEnter the number : ",x);
    scanf("%f",&x);
    
    int y ; 
    y = x;
    float fp = x-y;
    printf("\nFractional part of the number is : %f",fp);

    return 0;
    
}