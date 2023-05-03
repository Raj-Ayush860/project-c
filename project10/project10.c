#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int sum = 0;
    for(int i = 1000; i <= 9998; i+=2) {
        sum += i;
    }
    int singleDigit = sumOfDigits(sum);
    while(singleDigit >= 10) {
        singleDigit = sumOfDigits(singleDigit);
    }
    if(singleDigit % 2 == 0) {
        printf("Even Found\n");
    }
    else {
        printf("Odd Found\n");
    }
����return�0;
}
