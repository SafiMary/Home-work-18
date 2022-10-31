
#include <iostream>
using namespace std;

inline double func(int num1, int num2, int num3, const int counter) {
	double sum = 0;
	for (int i = 0; i < counter; i++) {
		sum += num1 + num2 + num3;
		return sum / counter;
	}
}
int max_val(int num1, int num2, int num3) {
	cout << "INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ?
		num1 : (num2 > num3 ? num2 : num3);
}

double max_val(double num1, double num2, double num3) {
	cout << "DOUBLE\n";
	return num1 > (num2 > num3 ? num2 : num3) ?
		num1 : (num2 > num3 ? num2 : num3);
}

short max_val(short num1, short num2, short num3) {
	cout << "SHORT\n";
	return num1 > (num2 > num3 ? num2 : num3) ?
		num1 : (num2 > num3 ? num2 : num3);
}

template <typename T>
int search_min(T arr[], const int length) {
	int min = 0;
	for (int i = 0; i < length; i++)
		if (min > arr[i]) {
			min = arr[i];
		}
	return min;

}


int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Задача 1\n";
	int n, m, k;
	const int S = 3;
	cout << "Встраиваемая функция ср. арифметического\n";
	cout << "Введите три числа: \n";
	cin >> n >> m >> k;
	cout << "Ср. арифметическое = " << func(n, m, k, S) << "\n";
	cout << "Задача 2\n";
	cout << "Перегруженная функция: \n";
	cout << max_val(3, 5, 6) << "\n";
	cout << max_val(2.5, 6.8, 8.9) << "\n";
	cout << max_val(-4, -10, -8) << "\n";
	cout << "Задача 3\n";
	const int size = 8;
	int arr[size]{ 10, 9, 7, 44, 45, -4, 2, 3 };
	cout << "Минимальный элемент массива " << search_min(arr, size);


	return 0;
}