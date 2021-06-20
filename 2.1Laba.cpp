#include <iostream>
#include <string>
using namespace std;

class Girl
{
public:
	int simp;
	string name;
	int interes1, interes2, interes3, interes4, interes5, interes6 = 0; // этапов 6, значит 6 интересов

	void getSimp()
	{
		cout << simp << endl;
	}

	void addSimp(int a, int b, int c, int d, int e, int f)
	{
		simp += interes1 * a + interes2 * b + interes3 * c + interes4 * d + interes5 * e + interes6 * f;
	}

	void girl(string name, int simp, int interes1, int interes2, int interes3, int interes4, int interes5, int interes6) // интересов 6
	{
		(*this).name = name;
		(*this).interes1 = interes1;
		(*this).interes2 = interes2;
		(*this).interes3 = interes3;
		(*this).interes4 = interes4;
		(*this).interes5 = interes5;
		(*this).interes6 = interes6;
		(*this).simp = simp;
	}

};

int main() {
	setlocale(LC_ALL, "Russian");
	int a; // ansver
	int q;
	Girl Katya; /* Имя\изначальная симпатия к тебе\ 6 интересов, которые влияют на симпатию к тебе
				 (каждое твоё качество по разному интересует разных девушек, от -2 до 2 баллов) */
	Katya.girl("Katya", 2, 2, 2, 2, 2, 2, 2);
	Girl Tanya;
	Tanya.girl("Tanya", 0, 3, 1, 3, 1, 3, 1);
	Girl Manya;
	Manya.girl("Manya", 0, 1, 3, 1, 3, 1, 3);


	cout << "В этой игре вы сможете познакомиться с одной из трёх тяночек" << endl;
	cout << "Начать игру? \n 1-Yes \n 0-No" << endl;
	cin >> a;
	if (a == 0)
		return 0; // ili che to eshe, chtobi main zavershilsya
	else if (a == 1)
	{
		cout << "Good! \n Перед вами сидят три тяночки с разными вкусами и предпочтениями. \n ";
		cout << "Ваша задача ответить на несколько вопросов и в конце вы узнаете с кем вы сможете познакомиться \n ";
	}
	int с = 1;
	switch (с)
	{
	case 1:
	{
		cout << "Какая у тебя зарплата?" << endl;
		cout << "1 - 50-100тысяч \n 2 - 100-200 тысяч \n 3 - более 200 тысяч" << endl;
		cin >> q;
		if (q == 1)
		{
			Katya.addSimp(-q, 0, 0, 0, 0, 0);
			Tanya.addSimp(-q, 0, 0, 0, 0, 0);
			Manya.addSimp(q, 0, 0, 0, 0, 0);
		}
		if (q == 2)
		{
			q = 1;
			Katya.addSimp(q, 0, 0, 0, 0, 0);
			Tanya.addSimp(-q, 0, 0, 0, 0, 0);
			Manya.addSimp(q, 0, 0, 0, 0, 0);
		}
		if (q == 3)
		{
			q = 1;
			Katya.addSimp(q, 0, 0, 0, 0, 0);
			Tanya.addSimp(q, 0, 0, 0, 0, 0);
			Manya.addSimp(q, 0, 0, 0, 0, 0);
		}
		с += 1;
		q = 0;
		
	}
	case 2:
	{
		cout << "Какой у тебя рост?" << endl;
		cout << "1 - меньше 170 \n 2 - 170-180 \n 3 - больше 180" << endl;
		cin >> q;
		if (q == 1)
		{
			Katya.addSimp(0, -q, 0, 0, 0, 0);
			Tanya.addSimp(0, q, 0, 0, 0, 0);
			Manya.addSimp(0, -q, 0, 0, 0, 0);
		}
		if (q == 2)
		{
			q = 1;
			Katya.addSimp(0, q, 0, 0, 0, 0);
			Tanya.addSimp(0, q, 0, 0, 0, 0);
			Manya.addSimp(0, -q, 0, 0, 0, 0);
		}
		if (q == 3)
		{
			q = 1;
			Katya.addSimp(0, -q, 0, 0, 0, 0);
			Tanya.addSimp(0, q, 0, 0, 0, 0);
			Manya.addSimp(0, q, 0, 0, 0, 0);
		}
		с += 1;
		q = 0;
		
	}
	case 3:
	{
		cout << "Какое у тебя телосложение?" << endl;
		cout << "1 - Худощавое \n 2 - Умеренное \n 3 - Полное" << endl;
		cin >> q;
		if (q == 1)
		{
			Katya.addSimp(0, 0, -q, 0, 0, 0);
			Tanya.addSimp(0, 0, -q, 0, 0, 0);
			Manya.addSimp(0, 0, q, 0, 0, 0);
		}
		if (q == 2)
		{
			q = 1;
			Katya.addSimp(0, 0, q, 0, 0, 0);
			Tanya.addSimp(0, 0, q, 0, 0, 0);
			Manya.addSimp(0, 0, q, 0, 0, 0);
		}
		if (q == 3)
		{
			q = 1;
			Katya.addSimp(0, 0, -q, 0, 0, 0);
			Tanya.addSimp(0, 0, -q, 0, 0, 0);
			Manya.addSimp(0, 0, -q, 0, 0, 0);
		}
		с += 1;
		q = 0;
		
	}
	case 4:
	{
		cout << "Читаешь ли ты книги?" << endl;
		cout << "1 - Да \n 2 - Иногда \n 3 - Нет" << endl;
		cin >> q;
		if (q == 1)
		{
			Katya.addSimp(0, 0, 0, q, 0, 0);
			Tanya.addSimp(0, 0, 0, q, 0, 0);
			Manya.addSimp(0, 0, 0, q, 0, 0);
		}
		if (q == 2)
		{
			q = 1;
			Katya.addSimp(0, 0, 0, q, 0, 0);
			Tanya.addSimp(0, 0, 0, q, 0, 0);
			Manya.addSimp(0, 0, 0, -q, 0, 0);
		}
		if (q == 3)
		{
			q = 1;
			Katya.addSimp(0, 0, 0, -q, 0, 0);
			Tanya.addSimp(0, 0, 0, q, 0, 0);
			Manya.addSimp(0, 0, 0, -q, 0, 0);
		}
		с += 1;
		q = 0;
		
	}
	case 5:
	{
		cout << "Любишь ли ты детей?" << endl;
		cout << "1 - Да \n 2 - Не слишком \n 3 - Нет" << endl;
		cin >> q;
		if (q == 1)
		{
			Katya.addSimp(0, 0, 0, 0, q, 0);
			Tanya.addSimp(0, 0, 0, 0, q, 0);
			Manya.addSimp(0, 0, 0, 0, q, 0);
		}
		if (q == 2)
		{
			q = 1;
			Katya.addSimp(0, 0, 0, 0, q, 0);
			Tanya.addSimp(0, 0, 0, 0, -q, 0);
			Manya.addSimp(0, 0, 0, 0, q, 0);
		}
		if (q == 3)
		{
			q = 1;
			Katya.addSimp(0, 0, 0, 0, -q, 0);
			Tanya.addSimp(0, 0, 0, 0, -q, 0);
			Manya.addSimp(0, 0, 0, 0, -q, 0);
		}
		с += 1;
		q = 0;
		
	}
	case 6:
	{
		cout << "Хороший ли у тебя образ жизни?" << endl;
		cout << "1 - Отличный \n 2 - Когда как, стандартный \n 3 - Плохой, курю и пью" << endl;
		cin >> q;
		if (q == 1)
		{
			Katya.addSimp(0, 0, 0, 0, 0, q);
			Tanya.addSimp(0, 0, 0, 0, 0, q);
			Manya.addSimp(0, 0, 0, 0, 0, q);
		}
		if (q == 2)
		{
			q = 1;
			Katya.addSimp(0, 0, 0, 0, 0, q);
			Tanya.addSimp(0, 0, 0, 0, 0, q);
			Manya.addSimp(0, 0, 0, 0, 0, -q);
		}
		if (q == 3)
		{
			q = 1;
			Katya.addSimp(0, 0, 0, 0, 0, -q);
			Tanya.addSimp(0, 0, 0, 0, 0, q);
			Manya.addSimp(0, 0, 0, 0, 0, -q);
		}
		с += 1;
		q = 0;
		
	}

	}

	/*Katya.getSimp();
	Tanya.getSimp();
	Manya.getSimp();*/
	
	if ((Katya.simp > Tanya.simp) & (Katya.simp > Manya.simp))
		cout << "Вы успешно познакомились с " << Katya.name << endl;
	if ((Tanya.simp > Katya.simp) & (Tanya.simp > Manya.simp))
		cout << "Вы успешно познакомились с " << Tanya.name << endl;
	if ((Manya.simp > Tanya.simp) & (Manya.simp > Katya.simp))
		cout << "Вы успешно познакомились с " << Manya.name << endl;

	system("pause");
	return 0;
}