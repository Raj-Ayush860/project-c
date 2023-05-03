#include <stdio.h>

void calcFactorial(int n, double *result) {
    if (n == 0) {
        *result = 0;
        return;
    }
    calcFactorial(n-1, result);
    *result += (double)factorial(n)/(double)n;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n, i;
    double sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    calcFactorial(n, &sum);
    printf("The sum of the series is: %lf\n", sum);
    return 0;
}
