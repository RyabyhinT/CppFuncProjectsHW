#include <iostream>
using namespace std;


int main()
{
/*    setlocale(LC_ALL, "rus");
    int a, b, c;
    cout << "Введите три числа";
    cin >> a >> b >> c;
    cout << (a + b) * c;

    int a, b, c; #1
    cout << "Введите три числа";
    cin >> a >> b >> c;
    if (a > b > c) {
        cout << a;
    }

    else if (b > a > c) {
        cout << b;
    }

    else {
        cout << c;
    }



    int a, b, c;#2
    cout << "Введите три числа";
    cin >> a >> b >> c;
    cout << (a + b) * c;


    int a, b; #3
    cout << "Введите два числа \n";
    cin >> a >> b;

    if (a * b > 20) {
        cout << "yes";
    }

    else {
        cout << "no";



    int a; #4
    cout << "Введите текущее время (в часах, 0-23): ";
    cin >> a;

    if (a >= 5 && a < 12) {
        cout << "Утро." << endl;
    } else if (a >= 12 && a < 18) {
        cout << "День." << endl;
    } else if (a >= 18 && a < 22) {
        cout << "Вечер." << endl;
    } else {
        cout << "Ночь." << endl;
    }



    float a, b; #5
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    cout << "Наибольшее число: " << ((a > b) ? a : b) << endl;



    int a; #6
    cout << "Введите число от 1 до 7: ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "Понедельник" << endl;
            break;
        case 2:
            cout << "Вторник" << endl;
            break;
        case 3:
            cout << "Среда" << endl;
            break;
        case 4:
            cout << "Четверг" << endl;
            break;
        case 5:
            cout << "Пятница" << endl;
            break;
        case 6:
            cout << "Суббота" << endl;
            break;
        case 7:
            cout << "Воскресенье" << endl;
            break;
        default:
            cout << "Ошибка: неверный номер дня." << endl;

    int a; #6
    cout << "Введите текущее время (в часах, 0-23): ";
    cin >> a;

    switch (a) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        cout << "Ночь" << endl;
    }*\