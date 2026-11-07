
#include <stdio.h>

int main()
{
    long long n;
    int count, digit;
    char a;
    do
    {
        count = 0;
        printf("Введите число: ");
        scanf("%lld", &n);
        if (n < 0) n = -n;
        do
        {
            digit = n % 10;
            if (digit > 5) count++;
            n = n / 10;
        } while (n > 0);
        printf("Количество цифр больше 5: %d\n", count);
        printf("Продолжить? (y/n): ");
        scanf(" %c", &a);
    } while (a == 'y');
    return 0;
}
