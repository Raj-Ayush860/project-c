#include <stdio.h>
#include <string.h>

int main() {
    char password[10] = "aeicegjkl"; // Password to be verified
    char input[3][3]; // Matrix input from user
    char diagonal[5]; // Concatenated diagonal elements of matrix
    int i, j;

    // Get input matrix from user
    printf("Enter the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &input[i][j]);
        }
    }

    // Concatenate diagonal elements of matrix
    diagonal[0] = input[0][0];
    diagonal[1] = input[1][1];
    diagonal[2] = input[2][2];
    diagonal[3] = input[0][2];
    diagonal[4] = input[2][0];

    // Verify password
    if (strcmp(diagonal, password) == 0) {
        printf("Password verified!\n");
    } else {
        printf("Incorrect password!\n");
    }

    return 0;
}
