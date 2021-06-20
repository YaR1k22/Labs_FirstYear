#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int x[222];
	int t;
	int n;

	cout << "Введите количество элементов массива: ";

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "x[" << i << "]=";
		cin >> x[i];
	}

	cout << "Исходный массив: ";

	for (int i = 0; i < n; i++)
		cout << x[i] << " ";

	cout << endl;

	for (int i = 0; i < n - 1; i++)

		for (int j = i + 1; j < n; j++)

			if (x[i] > x[j])
			{
				t = x[i];
				x[i] = x[j];
				x[j] = t;
			}

	cout << "Отсортированный массив по возрастанию: ";

	for (int i = 0; i < n; i++)
		cout << x[i] << " ";

	cout << endl;

	for (int i = 0; i < n - 1; i++)

		for (int j = i + 1; j < n; j++)

			if (x[i] < x[j])
			{
				t= x[i];
				x[i] = x[j];
				x[j] = t;
			}

	cout << "Отсортированный массив по убыванию: ";

	for (int i = 0; i < n; i++)
		cout << x[i] << " ";

	cout << endl;

	system("pause");

	return 0;

}