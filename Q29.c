#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 1) {
        factorial = factorial * i;
    }

    printf("Factorial = %d", factorial);

    return 0;
}