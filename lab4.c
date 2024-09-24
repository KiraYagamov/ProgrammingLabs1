#include <stdio.h>
#include <windows.h>


void lab4task1() {
    int day_number;
    scanf_s("%d", &day_number);
    switch (day_number) {
    case 1:
        printf("Понедельник\n");
        break;
    case 2:
        printf("Вторник\n");
        break;
    case 3:
        printf("Среда\n");
        break;
    case 4:
        printf("Четверг\n");
        break;
    case 5:
        printf("Пятница\n");
        break;
    case 6:
        printf("Суббота\n");
        break;
    case 7:
        printf("Воскресенье\n");
        break;
    default:
        printf("Ошибка! Неверный номер дня недели!\n");
    }
}

void lab4task2() {
    int hour;
    scanf_s("%d", &hour);
    int hello_number;
    if (hour < 0 || hour > 24) {
        printf("Error!");
        return;
    }
    if (hour >= 22 || hour <= 3)
        hello_number = 1;
    else if (hour >= 4 && hour <= 10)
        hello_number = 2;
    else if (hour >= 11 && hour <= 14)
        hello_number = 3;
    else if (hour >= 15 && hour <= 16)
        hello_number = 4;
    else
        hello_number = 5;
    switch (hello_number) {
        case 1:
            printf("Good Night!\n");
            break;
        case 2:
            printf("Good Morning!\n");
            break;
        case 3:
            printf("Good Day!\n");
            break;
        case 4:
            printf("Good Afternoon!\n");
            break;
        case 5:
            printf("Good Evening!\n");
            break;
        default:
            printf("Error!");
    }
}
int main4() {
    SetConsoleOutputCP(CP_UTF8);
    lab4task1();
    lab4task2();
}
