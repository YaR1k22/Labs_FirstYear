#include <iostream>
using namespace std;
int x;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введите число:" << '\n';
    cin >> x;
    cout << "полученное число:";
    cout << x * 2 << endl;
    return 0;
}
