#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void lab9task1(){
    int num1 = 5;
    double num2 = 2;
    int* num1link = &num1;
    double* num2link = &num2;

    printf("%d\n", &num1);
    printf("%d\n", &num2);
    printf("%d\n", num1link);
    printf("%d\n", num2link);
    printf("%d\n", &num1link);
    printf("%d\n", &num2link);
    printf("%d\n", *num1link);
    printf("%lf\n", *num2link);
}

void lab9task2(){
    printf("%d", sizeof(int*));
}

void lab9task3(){
    int* value;
//    value = 5;
    printf("%d", *value);
}

void lab9task4(){
    int value = 5;
    int* link = &value;
    printf("%d\n", value);
    printf("%d\n", *link);
    printf("%d\n", *&value);
}

void lab9task5(){
    int arr[] = {1, 2, 3, 4, 5};

    int* five = &arr[4];
    *five = 10;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
}

void lab9task6(){
    int arr[] = {1, 2, 3, 4, 5};
    int length = 5;
    int* first;
    int* last;
    for (int i = 0; i < length/2; i++){
        first = arr + i;
        last = arr + length - 1 - i;
        int lastVal = *last;
        *last = *first;
        *first = lastVal;
    }
    for (int i = 0; i < length; i++) {
        printf("%d\n", arr[i]);
    }
}

void lab9task7(){
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int *pointer = arr, *pointer2 = arr2;

    for (int i = 0; i < 5; i++) {
        *pointer2 = *pointer;
        pointer++;
        pointer2++;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr2[i]);
    }
}

void lab9task8(){
    int arr[] = {1, 2, 3, 4, 5};
    int *pointer = arr, *pointer2 = arr;
    for(int i = 0; i < 5; i++){
        pointer2 = pointer + i;
        printf("%d\n", pointer2 - pointer);
    }
}

void lab9task9(){
    int matrix[5][6];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            matrix[i][j] = rand() % 10;
        }
    }
    int sum = 0;
    int *pointer = &matrix[0][0];
    for (int i = 0; i < 5*6; ++i) {
        sum += *pointer;
        pointer++;
    }
    printf("Sum: %d", sum);
}

void lab9task10(){
    int** arr = (int**) malloc(5 * sizeof(int));
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        arr[i] = (int*) malloc(6 * sizeof(int));
        for (int j = 0; j < 6; ++j) {
            arr[i][j] = rand() % 10;
//            printf("%3d", arr[i][j]);
        }
//        printf("\n");
    }
    int* pointer;
    int* innerPointer;
    for (int i = 0; i < 5; ++i) {
        pointer = arr[i];
        for (int j = 0; j < 6; ++j) {
            innerPointer = pointer + j;
            sum += *innerPointer;
        }
    }
    printf("%d", sum);
}

int main9(){
    SetConsoleOutputCP(CP_UTF8);
//    lab9task1();
//    lab9task2();
//    lab9task3();
//    lab9task4();
//    lab9task5();
//    lab9task6();
//    lab9task7();
//    lab9task8();
//    lab9task9();
    lab9task10();
    return 0;
}
