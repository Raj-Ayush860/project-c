// Write a C program to check whether a number is prime, armstrong, perfect number or not using functions.

// Input:

// 11
// Output:

// 11 is prime number
// 11 is not a armstrong number
// 11 is not a perfect number

#include <stdio.h>
#include <math.h>

// function to check whether a number is prime or not
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// function to check whether a number is an Armstrong number or not
int isArmstrong(int n) {
    int sum = 0;
    int numDigits = 0;
    int temp = n;
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += pow(remainder, numDigits);
        temp /= 10;
    }
    if (sum == n) {
        return 1;
    }
    return 0;
}

// function to check whether a number is a perfect number or not
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // check whether the number is prime, Armstrong, or perfect
    if (isPrime(n)) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
    if (isPerfect(n)) {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    }

    return 0;
}
