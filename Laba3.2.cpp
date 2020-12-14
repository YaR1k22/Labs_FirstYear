#include <iostream>
using namespace std;
int i;
int x;
int c;
int Fib(int x)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    return Fib(x - 1) + Fib(x - 2);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число: " << endl;
    cin >> x;
    cout << "Последовательность Фибоначчи: ";
    for (int c = 0; c < x; ++c)
       cout << Fib(c) << " ";
        return 0;
}