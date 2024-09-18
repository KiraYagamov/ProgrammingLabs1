#include <stdio.h>
#include <locale.h>
int main2() {
    setlocale(LC_ALL, "");

    printf("Столбов Егор\n"); //1

    printf("Унылая пора! Очей очарование!\n"); //2
    printf("Приятна мне твоя прощальная краса - \n");
    printf("Люблю я пышное природы увядание, \n");
    printf("В багрец и золото одетые л е с а .\n");
    printf("А. С. Пушкин\n");

    double a = 5, b = 6, c = 7; //3
    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("c = %lf\n", c);

    int a1 = 5, b1 = 6, c1 = 7; //4
    printf("%d, %d, %d\n", a1, b1, c1);

    printf("%d\n%d\n%d\n", a1, b1, c1); //5

    double x1 = 5.5, x2 = 8.2; //6
    printf("x1 = %lf\nx2 = %lf\n", x1, x2);
}