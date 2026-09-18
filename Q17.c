#include <stdio.h>
#include <math.h>
int main()
{
float a , b ,c ;
float D , root1 , root2;
float realpart , imaginarypart;

printf("Enter a , b and c : ");
scanf("%f %f %f", &a, &b, &c);
if(a == 0)
{
    printf("Not a Quadratic equation");
    
}
else
{
    D = b*b - (4*a*c);

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / ( 2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Two distinct real roots\n");
        printf("root 1 = %.2f \n",root1);
        printf("root 2 = %.2f ",root2);

    }
    else if (D == 0)
    {
        root1 = -b / (2*a);

        printf("Two equal real roots \n");
        printf("Root 1 = %.2f \n" ,root1);
        printf("Root 2 = %.2f ", root1);

    }
    else
    {
        realpart = -b/2*a;
        imaginarypart = sqrt(-D) / (2*a);

        printf("Two complex roots \n");
        printf("root 1 = %.2f + %.2f i \n" , realpart , imaginarypart);
        printf("root 2 = %.2f - %.2f i" , realpart, imaginarypart);


    }
}
return 0;
}