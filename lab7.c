#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <stdbool.h>
#include <windows.h>

void lab7task1() {
    int length;
    printf("Введите длину массива: ");
    scanf_s("%d", &length);
    int* arr = (int*)malloc(length * sizeof(int));

    for (int i = 0; i < length; i++) {
        printf("arr[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 0; i < length; i++) {
        if (min > arr[i])
            min = arr[i];
    }
    printf("Min: %d", min);
}
void lab7task2() {
    int length;
    printf("Введите длину массива: ");
    scanf_s("%d", &length);
    int* arr = (int*)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % 100;
    }
    printf("[");
    for (int i = 0; i < length-1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]", arr[length-1]);
}
void lab7task3() {
    int length;
    printf("Введите длину массива: ");
    scanf_s("%d", &length);
    int* arr = (int*)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % 100;
    }
    int minVal = arr[0], maxVal = arr[0];
    for (int i = 0; i < length; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    printf("Max: %d, min: %d\n", maxVal, minVal);
}
void lab7task4() {
    int length;
    printf("Введите длину массива: ");
    scanf_s("%d", &length);
    int* arr = (int*)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % 100;
    }
    int minVal = arr[0], maxVal = arr[0];
    for (int i = 0; i < length; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    double middle = 0;
    for (int i = 0; i < length; i++) {
        middle += arr[i];
    }
    middle -= minVal + maxVal;
    middle /= length - 2;
    printf("Middle: %lf", middle);
}
int myMin(int val1, int val2) {
    if (val1 < val2) return val1;
    return val2;
}
bool isInArr(int val, int* arr, int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == val) {
            return true;
        }
    }
    return false;
}
void lab7task5() {
    int length1;
    printf("Введите длину первого массива: ");
    scanf_s("%d", &length1);
    int* arr1 = (int*)malloc(length1 * sizeof(int));
    for (int i = 0; i < length1; i++) {
        printf("arr1[%d] = ", i);
        scanf_s("%d", &arr1[i]);
    }
    int length2;
    printf("Введите длину второго массива: ");
    scanf_s("%d", &length2);
    int* arr2 = (int*)malloc(length2 * sizeof(int));
    for (int i = 0; i < length2; i++) {
        printf("arr2[%d] = ", i);
        scanf_s("%d", &arr2[i]);
    }
    int* duplicateArr = (int*)malloc(myMin(length1, length2) * sizeof(int));
    int setIndex = 0;
    for (int i = 0; i < length1; i++) {
        for (int j = 0; j < length2; j++) {
            if (arr1[i] == arr2[j]) {
                int val = arr1[i];
                if (!isInArr(val, duplicateArr, setIndex)) {
                    duplicateArr[setIndex] = val;
                    setIndex++;
                }
            }
        }
    }
    for (int i = 0; i < setIndex; i++) {
        printf("Duplicate %d: %d\n", i+1, duplicateArr[i]);
    }
}

void sortArr(int* arr, int length) {
    bool isSorted = false;
    while (!isSorted) {
        isSorted = true;
        for (int i = 0; i < length-1; i++) {
            if (arr[i] > arr[i + 1]) {
                int val1 = arr[i];
                int val2 = arr[i + 1];
                arr[i] = val2;
                arr[i + 1] = val1;
                isSorted = false;
            }
        }
    }
}
void sortArrReverse(int* arr, int length) {
    bool isSorted = false;
    while (!isSorted) {
        isSorted = true;
        for (int i = 0; i < length - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                int val1 = arr[i];
                int val2 = arr[i + 1];
                arr[i] = val2;
                arr[i + 1] = val1;
                isSorted = false;
            }
        }
    }
}

void lab7task6() {
    int length1;
    printf("Введите длину первого массива: ");
    scanf_s("%d", &length1);
    int* arr1 = (int*)malloc(length1 * sizeof(int));
    for (int i = 0; i < length1; i++) {
        printf("arr1[%d] = ", i);
        scanf_s("%d", &arr1[i]);
    }
    sortArr(arr1, length1);
    int length2;
    printf("Введите длину второго массива: ");
    scanf_s("%d", &length2);
    int* arr2 = (int*)malloc(length2 * sizeof(int));
    for (int i = 0; i < length2; i++) {
        printf("arr2[%d] = ", i);
        scanf_s("%d", &arr2[i]);
    }
    sortArr(arr2, length2);

    int* mergeArr = (int*)malloc((length1 + length2) * sizeof(int));
    int firstIndex = 0;
    int secondIndex = 0;
    for (int i = 0; i < length1 + length2; i++) {
        if ((arr1[firstIndex] <= arr2[secondIndex] && firstIndex < length1) || secondIndex >= length2) {
            mergeArr[i] = arr1[firstIndex];
            firstIndex++;
        }
        else if(secondIndex < length2) {
            mergeArr[i] = arr2[secondIndex];
            secondIndex++;
        }
        printf("%d\n", mergeArr[i]);
    }
}

void lab7task7() {
    int length1;
    printf("Введите длину первого массива: ");
    scanf_s("%d", &length1);
    int* arr1 = (int*)malloc(length1 * sizeof(int));
    for (int i = 0; i < length1; i++) {
        printf("arr1[%d] = ", i);
        scanf_s("%d", &arr1[i]);
    }
    sortArr(arr1, length1);
    int length2;
    printf("Введите длину второго массива: ");
    scanf_s("%d", &length2);
    int* arr2 = (int*)malloc(length2 * sizeof(int));
    for (int i = 0; i < length2; i++) {
        printf("arr2[%d] = ", i);
        scanf_s("%d", &arr2[i]);
    }
    sortArrReverse(arr2, length2);

    int* mergeArr = (int*)malloc((length1 + length2) * sizeof(int));
    int firstIndex = 0;
    int secondIndex = 0;
    for (int i = 0; i < length1 + length2; i++) {
        if (firstIndex < length1) {
            mergeArr[i] = arr1[firstIndex];
            firstIndex++;
        }
        else if (secondIndex < length2) {
            mergeArr[i] = arr2[secondIndex];
            secondIndex++;
        }
    }
    sortArrReverse(mergeArr, length1 + length2);
    for (int i = 0; i < length1 + length2; i++) {
        printf("%d\n", mergeArr[i]);
    }
}
void lab7task8() {
    int arr[6][5];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = rand() % 10000;
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

void lab7task9() {
    int rows = 6;
    int columns = 5;
    int* arr = (int*) malloc(columns * rows * sizeof(int));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i * columns + j] = rand() % 10000;
        }
    }

    int* horizontalSums = (int*)malloc(6 * sizeof(int));
    int* verticalSums = (int*)malloc(5 * sizeof(int));
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < columns; j++) {
            sum += arr[i * columns + j];
        }
        horizontalSums[i] = sum;
    }
    for (int i = 0; i < columns; i++) {
        int sum = 0;
        for (int j = 0; j < rows; j++) {
            sum += arr[j * columns + i];
        }
        verticalSums[i] = sum;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%7d", arr[i * columns + j]);
        }
        printf("| %d", horizontalSums[i]);
        printf("\n");
    }
    for (int i = 0; i < columns; i++) {
        printf("-------");
    }
    printf("\n");
    for (int i = 0; i < columns; i++) {
        printf("%7d", verticalSums[i]);
    }
}
void lab7task10() {
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = rand() % 1000;
        }
    }
    int mainSum = 0;
    int secondSum = 0;
    for (int i = 0; i < 5; i++) {
        mainSum += arr[i][i];
        secondSum += arr[i][4 - i];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%6d", arr[i][j]);
        }
        printf("\n");
    }
    printf("Main diag: %d, reverse diag: %d", mainSum, secondSum);
}

void lab7task11() {
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = rand() % 1000;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%6d", arr[i][j]);
        }
        printf("\n");
    }

    int maxSum = 0;
    int maxIndex = 0;
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += arr[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxIndex = i;
        }
    }
    printf("MaxSum: %d, index: %d", maxSum, maxIndex);
}
void lab7task12() {
    int rows = 7;
    int columns = 5;
    int* arr1 = (int*)malloc(rows * columns *sizeof(int));
    int* arr2 = (int*)malloc(rows * columns *sizeof(int));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr1[i * columns + j] = rand() % 10000;
        }
    }
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            arr2[i * rows + j] = rand() % 10000;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d, ", arr1[i* columns + j]);
        }
        printf("\n");
    }
    printf("-------------------------------\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d, ", arr1[i * rows + j]);
        }
        printf("\n");
    }
}

void lab7task13() {
    int dim = 4;
    int i, j, *N = (int*) malloc(dim * sizeof(int)), *n = (int*)malloc(dim * sizeof(int)), num;
    num = 1;
    for (i = 0; i < dim; i++) {
        N[i] = i + 2;
        num *= N[i];
        n[i] = 0;
    }
    for (i = 0; i < num; i++) {
        for (j = 0; j < dim; j++) {
            printf("%d ", n[j]);
        }
        printf("\n");
        j = 0;
        do {
            n[j] = (n[j] + 1) % N[j];
        } while (!n[j] && ++j < dim);
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    //lab7task1();
    //lab7task2();
    //lab7task3();
    //lab7task4();
    //lab7task5();
    //lab7task6();
    //lab7task7();
    //lab7task8();
    //lab7task9();
    //lab7task10();
    //lab7task11();
    //lab7task12();
//    lab7task13();
    printf("Привет, мир!");
}
