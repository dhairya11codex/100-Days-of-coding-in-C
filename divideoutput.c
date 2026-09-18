#include <stdio.h>
int main()
{
    int a , b ; // a > b 
    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("\nEnter the value of b : ");
    scanf("%d",&b);

    int rem = a%b ;
    printf("\nRemainder is : %d ",rem);
    return 0;



}
