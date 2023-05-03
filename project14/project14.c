#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int words = 1, vowels = 0, consonants = 0, spaces = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            words++;
            spaces++;
        } else if (isalpha(str[i])) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else {
            special++;
        }
    }

    printf("Words = %d\n", words);
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Space = %d\n", spaces);
    printf("Special Characters = %d\n", special);

    return 0;
}
