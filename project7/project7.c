
#include <stdio.h>

int main() {
    char car_type;
    float car_price, fitting_price, discount, total_amount, net_amount;

    printf("Enter the type of the car (H for Hatchback, S for Sedan, U for SUV, M for MUV): ");
    scanf("%c", &car_type);

    switch (car_type) {
        case 'H':
            discount = 0.03;
            break;
        case 'S':
            discount = 0.05;
            break;
        case 'U':
            discount = 0.10;
            break;
        case 'M':
            discount = 0.15;
            break;
        default:
            printf("Invalid Type\n");
            return 0;
    }

    printf("Enter the price of the car: ");
    scanf("%f", &car_price);

    printf("Enter the extra-fitting price of the car: ");
    scanf("%f", &fitting_price);

    total_amount = car_price + fitting_price;
    net_amount = total_amount - (discount * total_amount) + (0.12 * total_amount);

    printf("Net amount to be paid: %.2f\n", net_amount);

    return 0;
}
