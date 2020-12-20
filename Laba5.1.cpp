#include <iostream>
#include <string>
using namespace std;

// я долго думал над тематикой программы, поэтому за идею мне плюсик :-)

class Apple /* Компания Эпл ( а точнее склад этой компании ) 
								и их гаджеты ( ойфон и макбук ) */
{
protected:
	int weight, power; /* вес ( в граммах ) объекта и его мощность 
						( мощность пусть будет по 10-бальной шкале ) */
					  // вместо мощности можно было диагональ экрана сделать..
};

class Phone : public Apple 
{
public:
	int kolVoSC; // кол-во СимКарт
	
	string get_infoPhone()
	{
		string info = "Мощность: " + to_string(power) + "\n" + "Вес: " + to_string(weight) + "\n" + "Кол-во СимКарт: " + to_string(kolVoSC);
		return info;
	}

	void set_AI(int p, int w, int SC)
	{
		power = p;
		weight = w;
		kolVoSC = SC;
	}
};

class Notebook : public Apple
{
public: 
	int kolVoUSB; // кол-во ЮСБ портов 

	string get_infoNB()
	{
		string info = "Мощность: " + to_string(power) + "\n" + "Вес: " + to_string(weight) + "\n" + "Кол-во USB портов: " + to_string(kolVoUSB);
		return info;
	}

	void set_AI(int p, int w, int USB)
	{
		power = p;
		weight = w;
		kolVoUSB = USB;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	const int t = 6, n = 4;
	Phone iphone[t]; // разные модели айфонов, с разными хар-ми ( условно )
	iphone[0].set_AI(0, 000, 0);
	iphone[1].set_AI(1, 120, 1);
	iphone[2].set_AI(2, 135, 1);
	iphone[3].set_AI(3, 150, 2);
	iphone[4].set_AI(4, 157, 1);
	iphone[5].set_AI(5, 170, 2);

	Notebook macbook[n]; // разные модели макбуков, с разными хар-ми ( опять условности )
	macbook[0].set_AI(0, 000, 0);
	macbook[1].set_AI(6, 1000, 2);
	macbook[2].set_AI(8, 1070, 3);
	macbook[3].set_AI(10, 1110, 3);

	cout << "Телефонов на складе: " << t-1 << endl;
	cout << "Характеристики: \n";
	for (int i = 1; i < t; i++)
		cout << "Телефон №" << i << ": \n" << iphone[i].get_infoPhone() << endl;

	cout << "Ноутбуков на складе: " << n-1 << endl;
	cout << "Характеристики: \n ";
	for (int i = 1; i < n; i++)
		cout << "Ноутбук №" << i << ": \n" << iphone[i].get_infoPhone() << endl;
return 0;
}
// короче прога фигня, всё по татарски ( Элвис привет ), но все условия выполнены..