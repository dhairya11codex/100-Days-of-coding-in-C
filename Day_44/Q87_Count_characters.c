/* Q87 (Strings)
Count spaces, digits, and special characters in a string. */
#include <stdio.h>
#include <ctype.h>

#define MAX 200

int main() {
    char str[MAX];
    int spaces = 0, digits = 0, special = 0;

    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            if (str[i] == ' ') {
                spaces++;
            } else if (isdigit((unsigned char)str[i])) {
                digits++;
            } else if (!isalpha((unsigned char)str[i])) {
                special++;
            }
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
