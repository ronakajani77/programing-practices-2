
#include <stdio.h>

int main() {
    char str[200];
    int i, spaces = 0, vowels = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // Count spaces
        if (str[i] == ' ') {
            spaces++;
        }

        // Count vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}
