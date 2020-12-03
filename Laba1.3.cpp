#include <iostream>
using namespace std;
int x;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введите число:" << '\n';
    cin >> x;
    cout << "ваше число:";
    cout << x << endl;
    return 0;
}