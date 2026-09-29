#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int numA, numB;
    int onlyOneEven; 

    printf("=== РАЗДЕЛЕНИЕ ОБЯЗАННОСТЕЙ РОБОТОВ A и B ===\n");
    printf("Введите два целых числа (номер задания A и номер задания B): ");

    scanf("%d %d", &numA, &numB);

    onlyOneEven = ((numA % 2 == 0 && numB % 2 != 0) ||
        (numA % 2 != 0 && numB % 2 == 0));

    printf("Начать работу (1 - да, 0 - нет): %d\n", onlyOneEven);

    return 0;
}
