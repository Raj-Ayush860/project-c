#include <stdio.h>

int main() {
    float chennai[7], delhi[7], haveri[7], gangtok[7];
    float min_temp = 28, max_temp = 33;

    // get temperature for Chennai
    printf("Enter the temperature for Chennai (in Celsius) for a week:\n");
    for(int i=0; i<7; i++) {
        scanf("%f", &chennai[i]);
        if(chennai[i] < min_temp || chennai[i] > max_temp) {
            printf("Invalid temperature! Temperature should be between 28C to 33C.\n");
            i--;
        }
    }

    // calculate temperature for Delhi
    for(int i=0; i<7; i++) {
        delhi[i] = chennai[i] - 8;
    }

    // calculate temperature for Haveri
    for(int i=0; i<7; i++) {
        haveri[i] = chennai[i] + 5;
    }

    // calculate temperature for Gangtok
    for(int i=0; i<7; i++) {
        gangtok[i] = haveri[i] - delhi[i];
    }

    // display temperature for Gangtok
    printf("Temperature for Gangtok (in Celsius) for a week:\n");
    for(int i=0; i<7; i++) {
        printf("%.2f ", gangtok[i]);
    }
    printf("\n");

    return 0;
}
