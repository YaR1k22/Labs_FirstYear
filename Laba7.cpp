#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, n, m, i, j;
    bool left = false;
    bool right = true;
    cout << "Введите размер матрицы: ";
    cin >> n;
    m = n;
    int **matr = new int *[n];
    for (i = 0; i < n; i++)
        matr[i] = new int[m];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            matr[i][j] = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (j == (n - 1))
                cout << matr[i][j] << endl;
            else
                cout << matr[i][j];
    cout << "1 - Заполнить диагональ\n" << "2 - Заполнить обратную диагональ\n";
    cout << "3 - Заполнить зигзагом\n" << "4 - Заполнить все, кроме диагоналей\n";
    cout << "Выберите номер: ";
    cin >> x;
    switch (x)
    {
    case 1:
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (i == j)
                    matr[i][j] = 1;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (j == (n - 1))
                    cout << matr[i][j] << endl;
                else
                    cout << matr[i][j];
        break;
    case 2:
        for (i = 0; i < n; i++)
            for (j = n - 1; j >= 0; j--)
                if (j + i == n - 1)
                    matr[i][j] = 1;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (j == (n - 1))
                    cout << matr[i][j] << endl;
                else
                    cout << matr[i][j];
        break;
    case 3:
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
            {
                if (i % 2 == 0)
                    matr[i][j] = 1;
                if (i % 2 != 0)
                {
                    if (right == true)
                    {
                        matr[i][n - 1] = 1;
                        right = false;
                        left = true;
                        break;
                    }
                    
                    if (left == true)
                    {
                        matr[i][0] = 1;
                        left = false;
                        right = true;
                        break;
                    }
                    
                }
            }

            for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (j == (n - 1))
                    cout << matr[i][j] << endl;
                else
                    cout << matr[i][j];
        break;
    case 4:
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                matr[i][j] = 1;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (i == j)
                    matr[i][j] = 0;
        for (i = 0; i < n; i++)
            for (j = n - 1; j >= 0; j--)
                if (j + i == n - 1)
                    matr[i][j] = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (j == (n - 1))
                    cout << matr[i][j] << endl;
                else
                    cout << matr[i][j];
        break;
    }
}