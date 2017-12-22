#include "stdafx.h"
#include <iostream>
#include "clocale"
#include "cstdlib"
void cls() {
	system("cls");
	printf(" Ввод массива - 1\n Обработка массива - 2\n Вывод результата - 3\n Очистка экрана - 4\n Выход - 5 \n");
}
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int  n = 0, i, f = 15, b, c = 0, d = 0, e = 0, k = 15, m = 16;
	int *a = NULL;
	cls();
	while (m != 5) {
		cin >> m;
		switch (m) {
		case 1:
			while (n <= 0) {
				cout << "Введите размер массива ";
				cin >> n;
			}
			a = new int[n];
			for (i = 0; i < n; i++)
				a[i] = 0;
			cout << "\nВвести массив вручную - 1, Заполнить случайными числами - 2\n";
			cin >> f;
			switch (f)
			{
			case 1:
				cout << "Вводите элементы:\n";
				for (i = 0; i < n; i++)
				{
					cin >> a[i];
				}
				break;
			case 2:
				for (i = 0; i < n; i++)
				{
					a[i] = rand() % 40 - 10;
					cout << a[i] << " ";
				}
				cout << "\n";
				break;
			}break;
		case 2:
			if (n == 1) 
				cout << "Массив не введен\n";
			else
			{
				for (i = 0; i < n; i++)
				{
					b = i % 2;
					if (b == 1)
						a[i] = a[i] * (-1);
					cout << a[i] << " ";
					if (a[i] < 0)
						c++;
					if (a[i] > 0)
						d++;
					if (a[i] == 0)
						e++;
				}
				cout << "\n";
			}
			break;
		case 3:
			cout << "\n";
			cout << "Количество отрицательных значений: " << c << "\nКоличество положительных значений: " << d << "\nКоличество нулей: " << e << "\n";
			break;
		case 4:
			cls();
			c = 0;
			e = 0;
			d = 0;
			n = 0;
			break;
		case 5:
			break;
		default:
			cout << "Попробуй ещё раз\n";
		}
	}
	delete[]a;
	return 0;
}