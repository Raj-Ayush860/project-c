#include<stdio.h>

int power(int x, int n) {
    if(n == 0) {
        return 1;
    } else {
        return x * power(x, n-1);
    }
}

int main() {
    int x, n;
    printf("Enter a number x: ");
    scanf("%d", &x);
    printf("Enter a power n (<= 5): ");
    scanf("%d", &n);
    if(n > 5) {
        printf("Error: n should be less than or equal to 5.\n");
        return 0;
    }
    printf("%d raised to the power of %d is %d\n", x, n, power(x, n));
    return 0;
}
