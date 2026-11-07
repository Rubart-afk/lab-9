#include <stdio.h>
#include <math.h>

int main() {
    int storona, otvet;
    double ugol;
    char simvol;
    do {
        printf("Введите символ: ");
        scanf(" %c", &simvol);
        printf("Введите сторону: ");
        scanf("%d", &storona);
        printf("Введите угол: ");
        scanf("%lf", &ugol);
        ugol = ugol * 3.14159 / 180;
        for (int y = -storona; y <= storona; y++) {
            for (int x = -storona * 2; x <= storona * 2; x++) {
                double a = x / 2.0 * cos(ugol) + y * sin(ugol);
                double b = -x / 2.0 * sin(ugol) + y * cos(ugol);
                if ((fabs(fabs(a) - storona / 2.0) < 0.6 && fabs(b) <= storona / 2.0) ||
                    (fabs(fabs(b) - storona / 2.0) < 0.6 && fabs(a) <= storona / 2.0))
                    printf("%c", simvol);
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\nПродолжить? (0 - нет, любое число - да): ");
        scanf("%d", &otvet);
    } while (otvet != 0);
    return 0;
}