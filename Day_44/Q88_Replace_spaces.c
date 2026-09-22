/* Q88 (Strings)
Replace spaces with hyphens in a string. */
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX];

    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
            if (str[i] == ' ') {
                str[i] = '-';
            }
        }
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
        }
        printf("%s\n", str);
    }

    return 0;
}
