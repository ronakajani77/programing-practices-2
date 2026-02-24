#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length1, length2 = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // 1. Using string function
    length1 = strlen(str);

    // Removing newline counted by fgets
    if (str[length1 - 1] == '\n') {
        length1--;
    }

    // 2. Without using string function
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            length2++;
        }
    }

    printf("Length using string function: %d\n", length1);
    printf("Length without string function: %d\n", length2);

    return 0;
}

