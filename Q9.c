#include <math.h>
#include <stdio.h>
int main()
{ 
    float p , r , t , n ;
    printf("Enter the value of principal interest : ",p);
    scanf("%f",&p);
    printf("\nEnter the value of rate : ",r);
    scanf("%f",&r);
    printf("\nEnter the value of time : ",t);
    scanf("%f",&t);
    printf("\nEnter the value of n : ",n);
    scanf("%f",&n);

   
    
   

    float si = p*r*t/100;
    float ci = p * pow((1 + r/(100*n)),n*t) - p ;

    printf("\n The value of simple interest is : %f",si);
    printf("\nThe value of compound interest is : %f",ci);

    return 0;


}