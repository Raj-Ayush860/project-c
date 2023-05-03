#include <stdio.h>
#include <string.h>
#include <ctype.h>

int processString(char str[]) {
    int len = strlen(str);
    int i;
    for(i=0; str[i]!=' ' && str[i]!='\0'; i++) {
        if(i==0) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
    for(; str[i]!='\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("%s\n", str);
    printf("%d\n", len);
    if(len < 20) {
        return len;
    } else {
        return sizeof(str);
    }
}

int main() {
    char input[50];
    printf("Enter a sentence with two words: ");
    fgets(input, 50, stdin);
    int length = processString(input);
    printf("Length/Size of string: %d", length);
    return 0;
}
