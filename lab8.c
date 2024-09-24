#include <stdio.h>
#include <math.h>
#include <windows.h>

int factorial(int num){
    int result = 1;
    for (int i = 2; i <= num; i++){
        result *= i;
    }
    return result;
}

void lab8task1(){
    double x, tochn;
    printf("X:");
    scanf_s("%lf", &x);
    x -= ((int) (x / 3.14)) * 3.14;
    printf("Точность:");
    scanf_s("%lf", &tochn);
    double result = 1;
    for (int i = 1; 1; i++){
        double value = pow(x, i*2) / factorial(i*2);
        if (i % 2 == 0)
            result += value;
        else
            result -= value;
        if (value <= tochn)
            break;
    }
    printf("Result: %lf\n", result);
    printf("Result cos: %lf\n", cos(x));
}

void lab8task2(){
    double x, tochn;
    printf("X:");
    scanf_s("%lf", &x);
    x -= ((int) (x / 3.14)) * 3.14;
    printf("Точность:");
    scanf_s("%lf", &tochn);
    double result = x;
    for (int i = 1; 1; i++){
        double value = pow(x, i*2+1) / factorial(i*2+1);
        if (i % 2 == 0)
            result += value;
        else
            result -= value;
        if (value <= tochn)
            break;
    }
    printf("Result: %lf\n", result);
    printf("Result sin: %lf\n", sin(x));
}

double my_sqrt(double num){
    double left = 0;
    double right = num;

    while (left < right){
        double middle = (left + right)/2;
        if (middle * middle == num){
            return middle;
        }
        if (middle * middle > num){
            right = middle;
        }
        else if (middle * middle < num){
            left = middle;
        }
    }
}

void lab8task3(){
    double x, tochn;
    printf("X:");
    scanf_s("%lf", &x);
    printf("Точность:");
    scanf_s("%lf", &tochn);
    double result = 0;

    for(int i = 0; 1; i++){
        double value = (pow(-1, i) * (factorial(i*2)) / ((1 - 2*i) * pow(factorial(i), 2) * pow(4, i))) * pow(x, i);
        result += value;
        if (value <= tochn){
            break;
        }
    }
    printf("Result: %lf\n", result);
    printf("Result (sqrt(1 + x)): %lf\n", sqrt(1 + x));
    printf("Result (my_sqrt): %lf", my_sqrt(1 + x));
}

void lab8task4(){
    double x, tochn;
    printf("X:");
    scanf_s("%lf", &x);
    printf("Точность:");
    scanf_s("%lf", &tochn);
    double result = 0;

    for(int i = 0; 1; i++){
        double value = (factorial(2*i) / ((2*i+1) * pow(factorial(i), 2) * pow(4, i))) * pow(x, 2*i+1);
        result += value;
        if (value <= tochn){
            break;
        }
    }
    printf("Result: %lf\n", result);
    printf("Result (asin(x)): %lf\n", asin(x));
}

void lab8task5(){
    double x, tochn, a;
    printf("X:");
    scanf_s("%lf", &x);
    printf("a:");
    scanf_s("%lf", &a);
    printf("Точность:");
    scanf_s("%lf", &tochn);
    double result = 1;

    for (int i = 1; 1; i++){
        double value = 1;
        for (int j = 0; j < i; j++){
            value *= a - j;
        }
        value /= factorial(i);
        value *= pow(x, i);
        result += value;
        if (value <= tochn)
            break;
    }
    printf("Result: %lf\n", result);
    printf("Result (pow(1+x, a)): %lf", pow(1+x, a));
}

void lab8task6(){
    int length, splice_length = 0;
    scanf_s("%d", &length);
    int* arr = (int*) malloc(length * sizeof(int));
    for (int i = 0; i < length; i++){
        arr[i] = rand() % 100;
        if (arr[i] % 2 == 0)
            splice_length++;
        printf("%d, ", arr[i]);
    }
    printf("\n");
    int* splice = (int*) malloc(splice_length * sizeof(int));
    int splice_index = 0;
    int sum = 0;
    for (int i = 0; i < length; i++){
        if (arr[i] % 2 == 0){
            splice[splice_index] = arr[i];
            splice_index++;
            sum += arr[i];
        }
    }
    for(int i = 0; i < splice_length; i++){
        printf("%d, ", splice[i]);
    }
    printf("\n");
    printf("Sum: %d", sum);
}

void lab8task7(){
    int matrix[5][5] = {
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1}
    };
    int splice[10];
    for(int i = 0; i < 5; i++){
        splice[i] = matrix[i][i];
        printf("%d, ", splice[i]);
    }
}

void lab8task8(){
    int matrix[5][5] = {
            {1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 1}
    };
    int splice[5];
    for(int i = 0; i < 5; i++){
        splice[i] = matrix[i][i];
        printf("%d, ", splice[i]);
    }
    for(int i = 0; i < 5; i++){
        splice[5 + i] = matrix[i][4-i];
        printf("%d, ", splice[5 + i]);
    }
}

void lab8task9(){
    int length, splice_length = 0;
    scanf_s("%d", &length);
    int* arr = (int*) malloc(length * sizeof(int));
    for (int i = 0; i < length; i++){
        arr[i] = rand() % 100;
        if (arr[i] % 2 == 0)
            splice_length++;
        printf("%d, ", arr[i]);
    }
    printf("\n");
    int* splice = (int*) malloc(splice_length * sizeof(int));
    int splice_index = 0;
    for (int i = 0; i < length; i++){
        if (arr[i] % 2 == 0){
            splice[splice_index] = arr[i];
            splice_index++;
        }
    }
    for(int i = 0; i < splice_length; i++){
        printf("%d, ", splice[i]);
    }
    printf("\n");
    for(int i = 0; i < splice_length/2; i++){
        int val1 = splice[i];
        int val2 = splice[splice_length-1-i];
        splice[i] = val2;
        splice[splice_length-1-i] = val1;
    }
    for(int i = 0; i < splice_length; i++){
        printf("%d, ", splice[i]);
    }
    printf("\n");
}
void lab8task10(){
    int length, splice_length = 0;
    scanf_s("%d", &length);
    int* arr = (int*) malloc(length * sizeof(int));
    for (int i = 0; i < length; i++){
        arr[i] = rand() % 100;
        if (arr[i] % 2 == 0)
            splice_length++;
        printf("%d, ", arr[i]);
    }
    printf("\n");
    int* splice = (int*) malloc(splice_length * sizeof(int));
    int splice_index = 0;
    for (int i = 0; i < length; i++){
        if (arr[i] % 2 == 0){
            splice[splice_index] = arr[i];
            splice_index++;
        }
    }
    for(int i = 0; i < splice_length; i++){
        printf("%d, ", splice[i]);
    }
    printf("\n");
    int* reversed_splice = (int*) malloc(splice_length * sizeof(int));
    for(int i = 0; i < splice_length; i++){
        reversed_splice[i] = splice[splice_length-1-i];
    }
    for(int i = 0; i < splice_length; i++){
        printf("%d, ", reversed_splice[i]);
    }
    printf("\n");
}

int main8(){
    SetConsoleOutputCP(CP_UTF8);
//    lab8task1();
//    lab8task2();
//    lab8task3();
    lab8task4();
//    lab8task5();
//    lab8task6();
//    lab8task7();
//    lab8task8();
//    lab8task9();
//    lab8task10();
}
