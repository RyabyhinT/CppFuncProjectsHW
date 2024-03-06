
#include <iostream>
#define random(min,max) (min+rand()%(max-min+1));
using namespace std;
const int SIZE = 5;

void fillDoubleArray(int** arr) {
    int size1 = _msize(arr) / sizeof(arr[0]);
    int size2;
    for (int i = 0; i < size1; i++) {
        size2 = _msize(arr[0]) / sizeof(arr[0][0]);
        for (int j = 0; j < size2; j++) {
            arr[i][j] = random(0, 9);
        }
    }
}

void showDoubleArray(int** arr) {
    int size1 = _msize(arr) / sizeof(arr[0]);
    int size2;
    for (int i = 0; i < size1; i++) {
        size2 = _msize(arr[i]) / sizeof(arr[i][0]);
        for (int j = 0; j < size2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


//#8
void deleteElementByI(int*& arr, int index) {
    int size = _msize(arr) / sizeof(arr[0]);
    int* buf = new int[size - 1];
    for (int i = 0; i < index; i++) {
        buf[i] = arr[i];
    }
    for (int i = index + 1; i < size; i++) {
        buf[i - 1] = arr[i];
    }
    delete[] arr;
    arr = buf;
    cout << endl << index << " удален";

}


//#7
void arrCopy(int**& arr, int**& Arr2) {
    int size = _msize(arr) / sizeof(arr[0]);
    int size2 = _msize(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < size2; i++) {
        Arr2[i] = new int[size2];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size2; j++) {
            Arr2[i][j] = arr[i][j];

        }
    }
}


int main()
{

	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	//#1
	// 
	//float a1, a2, a3, a4;
	//cout << "Введите 4 числа: ";
	//cin >> a1 >> a2 >> a3 >> a4;

	//cout << (a1 + a2 + a3 + a4) / 4;

//#2
//	int a1 = 1, b1 = 40;
//	if (a1 % 2 == 0)a1++;
//	for (int i = a1; i <= b1; i+=2) {
//		cout << i << " ";
//	}
//	cout << endl;
//}


//#3
//	int a1;
//	cout << "Введите сторону квадрата: ";
//	cin >> a1;
//	for (int i = 0; i <= a1; i++) {
//		for (int j = 0; j < i; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}


//#4
    //int a;															
    //int count=0;
    //cout << "введите число: ";
    //cin >> a;
    //if (a == 0) count = 1;
    //else {
    //	while (a != 0) {
    //		a = a / 10;
    //		count++;
    //	}
    //}
    //cout << count << " разряда" << endl;


    //#5
  /*  int min, max;															
    cout << "Введите минимальное и максимальное число: " << endl;
    cin >> min >> max;

    if (min > max) swap(min, max);
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++){
    	arr[i] = random(min, max);
    	cout << arr[i] << " ";
    }*/

    //#8
    //int* arr = new int[SIZE] {1, 2, 3, 4, 5};                                        
    //int index = 3;
    //for (int i = 0; i < SIZE; i++) {
    //	cout << arr[i] << " ";
    //}
    //deleteElementByI(arr, index);
    //for (int i = 0; i < SIZE-1; i++) {
    //	cout << arr[i] << " ";
    //}
    //cout << endl;



    //#7
    int** arr = new int* [SIZE];     

    int** Arr2 = new int* [SIZE];
    for (int i = 0; i < SIZE; i++) {
    	arr[i] = new int[SIZE];
    }

    fillDoubleArray(arr);
    showDoubleArray(arr);
    arrCopy(arr, Arr2);
    showDoubleArray(Arr2);





   /* fillDoubleArray(arr);
	showDoubleArray(arr);
    addArrayByIndex(arr, 2,newArr);
	showDoubleArray(arr);*/
}