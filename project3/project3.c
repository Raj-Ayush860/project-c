#include <stdio.h>

int main() {
    int i, angle1, angle2, angle3;
    int acuteCount = 0, rightCount = 0, obtuseCount = 0, wrongCount = 0;

    for (i = 1; i <= 5; i++) {
        printf("Enter the three angles of triangle %d: ", i);
        scanf("%d %d %d", &angle1, &angle2, &angle3);

        int sum = angle1 + angle2 + angle3;

        if (sum > 180) {
            printf("Wrong Entry, try again.\n");
            wrongCount++;
            i--;
            continue;
        }

        if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
            printf("Acute Angled Triangle\n");
            acuteCount++;
        } else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            printf("Right Angled Triangle\n");
            rightCount++;
        } else {
            printf("Obtuse Angled Triangle\n");
            obtuseCount++;
        }
    }

    printf("\nAcute Angled Triangle: %d\n", acuteCount);
    printf("Right Angled Triangle: %d\n", rightCount);
    printf("Obtuse Angled Triangle: %d\n", obtuseCount);
    printf("Wrong Entries: %d\n", wrongCount);

    return 0;
}
