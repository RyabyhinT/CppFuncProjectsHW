
#include <iostream>
using namespace std;

int main()
{
	//№1
	/*setlocale(LC_ALL, "rus");
	float a;
	cout << "\nВведите радиус\n";
	cin >> a;
	cout << "\nПлощадь круга- ";
	cout << a * a * 3.1415;
		cout << "\nДлинна окружности- ";
	cout << a * 2 * 3.1415;
	cout << "\nДиаметр- ";
	cout << a * 2;*/
	//№2
	setlocale(LC_ALL, "rus");
	float c1, c2, c3, c4, sum = 4;
	cout << "Введите оценки за четверти\n";
	cin >> c1;
	cin >> c2;
	cin >> c3;
	cin >> c4;
	cout << round ((c1 + c2 + c3 + c4) / sum);
}