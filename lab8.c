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

int main(){
    SetConsoleOutputCP(CP_UTF8);
//    lab8task1();
//    lab8task2();
//    lab8task3();
    lab8task4();
}