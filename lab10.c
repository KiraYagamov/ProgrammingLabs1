#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

void lab10task1(){
    int num  = 5000;
    printf("%d\n", (num >> 9) & 0x1);
}

void lab10task2(){
    int num = 0;
    int n;
    printf("N:");
    scanf_s("%d", &n);
    num |= (int) pow(2, n-1);
    printf("%d\n", num);
}

void lab10task3(){
    int a = 16, b = 8;
    int c = 0;
    int d = a;
    while (a != 0){
        if (a & 0x1)
            c += b;
        b <<= 1;
        a >>= 1;
    }
    printf("Mult: %d\n", c);
    printf("Div: %d\n", d >> 3);
}

void lab10task4(){
    int num = 40;
    for (int i = (int) sqrt(num); i >= 0; i--){
        printf("%d", num >> i & 0x1);
    }
}
union IntFloat {
    unsigned int integerValue;
    float floatValue;
};

void lab10task5(){
    union IntFloat num;
    num.floatValue = 50.5f;
    for (int i = 31; i >= 0; i--) {
        if ((num.integerValue & ((unsigned int)1 << i)) != 0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    printf("\n");
}

void lab10task6(){
    int num = 722731018;
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    for (int i = 29; i > 25; --i)
        num1 |= (num & (1 << i)) >> 26;
    for (int i = 25; i > 21; --i)
        num2 |= (num & (1 << i)) >> 22;
    for (int i = 21; i > 17; --i)
        num3 |= (num & (1 << i)) >> 18;
    for (int i = 3; i >= 0; --i)
        num4 |= (num & (1 << i)) >> 0;
    printf("Num1: %d, num2: %d, num3: %d, num4: %d", num1, num2, num3, num4);
}

void lab10task7(){
    int a = 5, b = 3;
    a ^= b;
    b ^= a;
    a ^= b;
    printf("a: %d, b: %d", a, b);
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
//    lab10task1();
//    lab10task2();
//    lab10task3();
//    lab10task4();
//    lab10task5();
    lab10task6();
//    lab10task7();
    return 0;
}
