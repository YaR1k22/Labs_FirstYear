#include <iostream>
using namespace std;
int a;
int b;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введите два числа:" << '\n';
    cin >> a >> b;
    cout << "полученная сумма:";
    cout << a + b << endl;
    return 0;
}