#include <stdio.h>
#include <windows.h>

int main1() {
    SetConsoleOutputCP(CP_UTF8);

    float x = -1.5f; //1

    int summa = 0; //2

    int n = 0; //3
    n++;

    int counter = 10; //4
    counter -= 2;

    float x1 = 5, x2 = 10; //5
    float middle = (x1 + x2) / 2;

    int dx = 10;  //6
    x += dx;

    float funts = 5; //7
    float kilogramm = (funts * 405.9f) / 1000;

    float kilemetres = 10; //8
    float versts = (kilemetres * 1000) / 1066.8f;

    float width = 10; //9
    float height = 15;
    float square = width * height;

    float triangle_height = 10; //10
    float triangle_side = 5;
    float triangle_square = 0.5f * triangle_height * triangle_side;

    float top_side = 10; //11
    float bottom_tide = 20;
    float trap_height = 5;
    float trap_square = ((top_side + bottom_tide) / 2) * trap_height;

    int notebook_count = 5; //12
    float notebook_price = 10;
    int oblojka_count = 10;
    float oblojka_price = 10;
    int pencil_count = 10;
    float pencil_price = 10;
    float all_price = notebook_count * notebook_price + oblojka_count * oblojka_price + pencil_count * pencil_price;

    int tomato_count = 5; //13
    float tomato_price = 10;
    int cucumber_count = 10;
    float cucumber_price = 10;
    int ukrop_count = 10;
    float ukrop_price = 10;
    float all_salad_price = tomato_count * tomato_price + cucumber_count * cucumber_price + ukrop_count * ukrop_price;
}