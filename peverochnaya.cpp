
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    /*
    * 1 задание
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a >= b && a >= c && a >= d)
    //    cout << "Наибольшее число: " << a;
    //else if (b >= a && b >= c && b >= d)
    //    cout << "Наибольшее число: " << b;
    //
    //else if (c >= a && c >= b && c >= d)
        cout << "Наибольшее число: " << c;

    else
        cout << "Наибольшее число: " << d;
    */


    /*   2 zadanie*/
    //    int n, a, b;
    //    cout << "Начало: \n";
    //    cin >> a;
    //    cout << "Конец: \n";
    //    cin >> b;
    //    cout << "    \n";
    //    cin >> n;
    //    if (a > b) swap(a, b);
    //    if (b - a < n)n = b - a;
    //    for (int j = 0, i = a; j < n; i++, j++)
    //        cout << endl << i;
    //    cout << endl;
    //}

    // 3 zadanie
    //    float max;
    //    cout << "Введите ";
    //    cin >> max;
    //    if (max < 0)
    //        cout << "";
    //        for (int i = 0; i < max; i += 0.25)
    //        cout << endl << i;
    //    cout << endl;
    //}

   /* 4 zadanie*/
    /*   int a, b = 0, c = 0;
    do {
        cout << "Введите ";
        cin >> a;
        b++;
        c += a;
    } while (a != 0);
    b--;
    cout << "Crednee arefm" << c;
    cout << endl;*/

    /*5 zadanie
    char sum;
        cin >> sum;
        if ((sum >= 65 && sum <= 90) || (sum >= 97 && sum <= 122))
            cout << "Yes";
        else cout << "no";*/

   /* 6 zadanie*/
        int array[10];
        int array2[10];
        for (int i = 0; i < 10; i++) {
            array[i] = 7 + rand() % 18 - 7 + 1;
            cout << array[i] << " ";
        }

        cout << endl;





}