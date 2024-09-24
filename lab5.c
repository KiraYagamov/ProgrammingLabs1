#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void lab5task1() {
    int num = 1;
    printf("-----------------\n");
    printf("Число Квадрат\n");
    for (int i = 0; i < 10; i++) {
        printf("%3d %7d\n", num, num * num);
        num += 2;
    }
    printf("-----------------\n");
}

void lab5task2() {
    int n;
    printf("N: ");
    scanf_s("%d", &n);
    int sum = 0;
    int num = 2;
    for (int i = 0; i < n; i++) {
        sum += num;
        num += 2;
    }
    printf("Result: %d", sum);
}
void lab5task3() {
    int n;
    printf("N: ");
    scanf_s("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
            sum += 1 / (double)i;
        else
            sum -= 1 / (double)i;
    }
    printf("Result: %lf\n", sum);
}
void lab5task4() {
    double sum = 0;
    for (int i = 1; i <= 10000000; i++) {
        if (i % 2 != 0)
            sum += 1 / (double)i;
        else
            sum -= 1 / (double)i;
    }
    printf("Sum: %lf\n", sum);
    printf("Ln(2): %lf\n", log(2));
}

void lab5task5() {
    int num;
    printf("Num: ");
    scanf_s("%d", &num);
    double result = 1;
    for (int i = num; i > 1; i--) {
        result *= i;
    }
    printf("Result: %lf", result);
}

void lab5task6() {
    double sum = 0;
    for (int i = 0; i < 10; i++) {
        int num = 1 + rand() % 10;
        sum += num;
        printf("%d\n", num);
    }
    printf("Middle: %lf\n", sum / 10);
}
void lab5task7() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%4d ", i * j);
        }
        printf("\n");
    }
}
int main5() {
    SetConsoleOutputCP(CP_UTF8);

//    lab5task1();
    //lab5task2();
    //lab5task3();
//    lab5task4();
//    lab5task5();
    //lab5task6();
//    lab5task7();
}
