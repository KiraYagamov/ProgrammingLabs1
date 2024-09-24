#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <stdbool.h>
void task1() {
    double num1, num2; //1
    printf("Число 1: ");
    scanf_s("%lf", &num1);
    printf("Число 2: ");
    scanf_s("%lf", &num2);
    if (num2 == 0) {
        printf("Деление на ноль запрещено!");
    }
    else {
        printf("Результат: %lf", num1 / num2);
    }
}
void task2() {
    double a, b, c; //2
    printf("a = ");
    scanf_s("%lf", &a);
    printf("b = ");
    scanf_s("%lf", &b);
    printf("c = ");
    scanf_s("%lf", &c);

    if (a == 0) {
        printf("Коэффицент при второй степени неизвестного не может быть равным нулю");
    }
    else if (b == 0) {
        if (c > 0) printf("Корней нет!");
        else {
            printf("Ответ: +-%lf", pow(-c, 0.5) / a);
        }
    }
    else {
        double D = pow(b, 2) - 4 * a * c;
        if (D > 0) {
            double x1 = (-b + pow(D, 0.5)) / 2 * a;
            double x2 = (-b - pow(D, 0.5)) / 2 * a;
            printf("Результат: %lf, %lf", x1, x2);
        }
        else if (D == 0) {
            printf("Результат: %lf", (-b) / 2 * a);
        }
        else {
            printf("Решений нет!");
        }
    }
}

void task3() {
    bool x = true, y = false, z = true;
    if (x || y && !z)
        printf("True\n");
    else
        printf("False\n");
}

void task4() {
    double num1, num2, num3;
    printf("num1 = ");
    scanf_s("%lf", &num1);
    printf("num2 = ");
    scanf_s("%lf", &num2);
    printf("num3 = ");
    scanf_s("%lf", &num3);
    if (num1 > num2 && num2 > num3) printf("%lf, %lf, %lf", num3, num2, num1);
    else if (num1 > num3 && num3 > num2) printf("%lf, %lf, %lf", num2, num3, num1);
    else if (num2 > num1 && num1 > num3) printf("%lf, %lf, %lf", num3, num1, num2);
    else if (num2 > num3 && num3 > num1) printf("%lf, %lf, %lf", num1, num3, num2);
    else if (num3 > num1 && num1 > num2) printf("%lf, %lf, %lf", num2, num1, num3);
    else if (num3 > num2 && num2 > num1) printf("%lf, %lf, %lf", num1, num2, num3);
}

void task5() {
    int num;
    printf("Введите число: ");
    scanf_s("%d", &num);
    if (num % 2 == 0) printf("Четное\n");
    else printf("Нечетное\n");
}

void task6() {
    int num;
    printf("Введите число: ");
    scanf_s("%d", &num);
    if (num % 3 == 0) printf("Делится\n");
    else printf("Не делится\n");
}

void task7() {
    int score;
    printf("Введте кол-во очков: ");
    scanf_s("%d", &score);
    if (score >= 0 && score <= 20) printf("2 балла");
    if (score >= 21 && score <= 40) printf("3 балла");
    if (score >= 41 && score <= 80) printf("4 балла");
    if (score >= 81 && score <= 100) printf("5 баллов");
}

void task8() {
    // Эквивалентны: 1, 2, 5
    // Другие (эквивалентны между собой): 3, 4
}

int main3() {
    SetConsoleOutputCP(CP_UTF8);
    //task1();
    //task2();
    //task3();
    task4();
    //task5();
    //task6();
    //task7();
}