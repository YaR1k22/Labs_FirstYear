#include <iostream>
using namespace std;
int i;
bool Prostoe(int x)
{
	for (int i = 2; i <= x / 2; i++)
		if (x % i == 0)
			return false;
	return true;
}
long int Fact(int x)
{
	int t = 1;
	if (x < 0)
		return 0;
	else if (x == 0)
		return 1;
	else
		for (i = 2; i <= x; i++)
			t = t * i;
		return t;
}
int main()
{
	int x;
	int num;
	int r;
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: ";
	cin >> x;
	cout << "1 - факториал числа " << "2 - простые числа ";
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "Факториал числа " << x << " = " << Fact(x) << endl;
		break;
	case 2:
		r = x;
		for (int x = 3; x <= r; x++)
		{
			if (Prostoe(x))
				cout << x << " ";
		}
		break;
	default:
		break;
	}
	return 0;
}
