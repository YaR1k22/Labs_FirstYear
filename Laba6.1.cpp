#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int k = 0;
	bool l = 0;
	bool o = 0;
	string edin[] = { " one ", " two ", " three ", " four ", " five ", " six ", " seven ", " eight ", " nine " };
	string teen[] = { " ten ", " eleven "," twelve ", " thirteen ", " fourteen ", " fifteen ", " sixteen ", " seventeen ", " eighteen ", " nineteen " };
	string des[] = { " ", " twenty ", " thirty ", " forty ", " fifty ", " sixty ", " seventy ", " eightty ", " ninety " };
	string s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12 = "";
	string stroka;

	cout << "Введите число: " << endl;
	cin >> stroka;
	unsigned long int x = stoi(stroka);
	// проверял более 50ти чисел, в том числе: 5000, 13000, 19000, 20000, 43210, 1234567890.
	int r = x;
	while (r != 0)
	{
		r = (r / 10);
		k++;
	}

	int g = 0;
	if ((x % 100 <= 19) && (x % 100 >= 10))
		g = 1;

	if ((k >= 1) and (g == 0))
	{
		int t;
		t = x % 10;
		if (t != 0)
			s1 = s1 + edin[t - 1]; // единицы
	}
	if (k >= 2)
	{
		int t;
		t = (x / 10) % 10;
		if ((g == 0) and (t != 0))
		{
			s2 = s2 + des[t - 1]; // десятки
		}
		else if (t != 0)
		{
			t = x % 10;
			s2 = s2 + teen[t]; // уникальные 11-19
		}
	}
	if (k >= 3)
	{
		int t;
		t = (x / 100) % 10;
		if (t != 0)
			s3 = s3 + edin[t - 1] + "hundred"; // сотни
	}

	int d = 0;
	if ((x / 1000 <= 19) && (x / 1000 >= 10))
		d = 1;

	if ((k >= 4) and (d == 0))
	{

		int t;
		t = (x / 1000) % 10;
		if (t != 0) {
			s4 = s4 + edin[t - 1]; // тысячи 
			o = 1;
		}

	}
	if (k >= 5)
	{

		int t;
		t = (x / 10000) % 10;
		if ((d == 0) and (t != 0))
		{
			o = 1;
			s5 = s5 + des[t - 1]; // десятки тысяч
		}
		else if (t != 0)
		{
			t = (x / 1000) % 10;
			s5 = s5 + teen[t];
			o = 1;
		}
	}
	if (k >= 6)
	{

		int t;
		t = (x / 100000) % 10;
		if (t != 0) {
			o = 1;
			s6 = s6 + edin[t - 1] + "hundred"; // сотни тысяч 
		}
	}
	int p = 0;
	if ((x / 1000000 <= 19) && (x / 1000000 >= 10))
		p = 1;
	if ((k >= 7) and (p == 0))
	{
		l = 1;
		int t;
		t = (x / 1000000) % 10;
		if (t != 0)
			s7 = s7 + edin[t - 1]; // миллионы
	}

	if (k >= 8)
	{
		l = 1;
		int t;
		t = (x / 10000000) % 10;
		if ((p == 0) and (t != 0))

		{
			s8 = s8 + des[t - 1]; // десятки миллионов
		}
		else if (t != 0)
		{
			t = (x / 1000000) % 10;
			s8 = s8 + teen[t];
		}
	}
	if ((k >= 9) and (p == 0))
	{
		l = 1;
		int t;
		t = (x / 100000000) % 10;
		if (t != 0)
			s9 = s9 + edin[t - 1] + "hundred"; // сотни миллионов 
	}


	if (k == 10)
	{
		int t;
		t = (x / 1000000000) % 10;
		s10 = s10 + edin[t - 1] + "billion"; // миллиарды 
	}

	if (l == 1)
		s11 = s9 + " " + s8 + " " + s7 + "million";
	if (o == 1)
		s12 = s6 + " " + s5 + " " + s4 + "thousand";
	cout << s10 << " " << s11 << " " << s12 << " " << s3 << s2 << s1 << endl;
	
	system("pause");
	return 0;
}