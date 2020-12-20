#include <iostream>
using namespace std;
int m[4];
int i;
int x;
int main()
{
	for (int x = 1000; x < 9999; x++)
	{
			m[1] = (x % 10);
			m[2] = ((x / 10) % 10);
			m[3] = ((x / 100) % 10);
			m[4] = (x / 1000);

			if (((m[1] * 10 + m[2]) * (m[3] * 10 + m[4])) == x)
			{
				cout << x << endl;
			}	
			if (((m[1] * 10 + m[2]) * (m[4] * 10 + m[3])) == x)
			{
				cout << x << endl;
			}
			if (((m[1] * 10 + m[3]) * (m[4] * 10 + m[2])) == x)
			{
				cout << x << endl;
			}
			if (((m[1] * 10 + m[3]) * (m[2] * 10 + m[4])) == x)
			{
				cout << x << endl;
			}
			if (((m[1] * 10 + m[4]) * (m[2] * 10 + m[3])) == x)
			{
				cout << x << endl;
			}
			if (((m[1] * 10 + m[4]) * (m[3] * 10 + m[2])) == x)
			{
				cout << x << endl;
			}
			if (((m[2] * 10 + m[3]) * (m[1] * 10 + m[4])) == x)
			{
				cout << x << endl;
			}
			if (((m[2] * 10 + m[3]) * (m[4] * 10 + m[1])) == x)
			{
				cout << x << endl;
			}
			if (((m[2] * 10 + m[4]) * (m[1] * 10 + m[3])) == x)
			{
				cout << x << endl;
			}
			if (((m[2] * 10 + m[4]) * (m[3] * 10 + m[1])) == x)
			{
				cout << x << endl;
			}
			if (((m[3] * 10 + m[4]) * (m[1] * 10 + m[2])) == x)
			{
				cout << x << endl;
			}
			if (((m[3] * 10 + m[4]) * (m[2] * 10 + m[1])) == x)
			{
				cout << x << endl;
			}
	}
	return 0;
}