#include <iostream>

#include <time.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int l;

	cout << "Введите длину пароля: ";
	cin >> l;

	for (int k = 0; k < l; k++) {

		cout << static_cast<char>(rand() % 74 + 48) << "";

	}

	cout << endl;
	system("pause");
	return 0;

}