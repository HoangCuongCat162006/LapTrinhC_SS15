#include <stdio.h>
#include <string.h>

void removeChar(char *str, char ch) {
    int i, j = 0;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to remove: ");
    scanf(" %c", &ch);

    removeChar(str, ch);

    printf("Resulting string: %s\n", str);

    return 0;
}
