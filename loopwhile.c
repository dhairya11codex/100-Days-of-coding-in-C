#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    while(i<=n)
    {
        printf("%d \n", i);
        i++;
    }
    return 0;
}
