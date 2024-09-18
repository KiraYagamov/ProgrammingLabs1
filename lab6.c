#include <stdio.h>
#include <locale.h>
#include <math.h>

void lab6task1() {
    // a) да
    // б) нет
}
void lab6task2() {
    int value;
    scanf_s("%d", &value);
    int minValue = value;
    while (value != 0) {
        scanf_s("%d", &value);
        if (value == 0)
            break;
        else if (value < 0) {
            printf("Error!\n");
            continue;
        }
        if (minValue > value) minValue = value;
    }
    printf("Min value: %d", minValue);
}
void lab6task3() {
    int value;
    scanf_s("%d", &value);
    int rightBorder = (int) pow(value, 0.5);
    printf("Right border: %d\n", rightBorder);
    for (int i = 2; i <= rightBorder; i++) {
        if (value % i == 0) {
            printf("Не простое!\n");
            return;
        }
    }
    printf("Простое!\n");
}

void lab6task4() {
    int accuracy;
    scanf_s("%d", &accuracy);
    double pi = 0;
    double helper = 1;
    for (int i = 0; i < 100000; i++) {
        if (i % 2 == 0)
            pi += 1 / helper;
        else
            pi -= 1 / helper;
        helper += 2;
    }
    printf("Result: %.*lf", accuracy, pi*4);
}

int main6() {
    setlocale(LC_ALL, "");

    //lab6task2();
    //lab6task3();
    lab6task4();
}
