#include <stdio.h>
#include <math.h>
#include <windows.h>

void lab6task1() {
    // a) да
    // б) да
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
    int rightBorder = (int) sqrt(value);
    for (int i = 2; i <= rightBorder; i++) {
        if (value % i == 0) {
            printf("Не простое!\n");
            return;
        }
    }
    printf("Простое!\n");
}

void lab6task4() {
    double accuracy;
    scanf_s("%lf", &accuracy);
    double pi = 0;
    double helper = 1;
    for (int i = 0; 1; i++) {
        double num = (double) 1 / helper;
        if (i % 2 == 0)
            pi += num;
        else
            pi -= num;
        if (num <= accuracy)
            break;
        helper += 2;
    }
    printf("Result: %.*lf", accuracy, pi*4);
}

int main6() {
    SetConsoleOutputCP(CP_UTF8);

    //lab6task2();
//    lab6task3();
    lab6task4();
}
