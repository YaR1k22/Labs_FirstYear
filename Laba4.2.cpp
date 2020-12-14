#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	int  age, height, id, nomer;
	string name;
public:
	bool isLeader, isInTeam;
	string get_full() // полная информация о человеке
	{
		string value2 = to_string(nomer) + ": " + name + " Возраст: " + to_string(age) + " Рост: " + to_string(height) + " id: " + to_string(id);
		return value2;
	}

	string get_small() // краткая информация о человеке
	{
		string value = to_string(nomer) + ": " + name + " " + " Возраст: " + to_string(age);
		return value;
	}
	string get_name()
	{
		return name;
	}
	void set_id(int i)
	{
		id = i;
	}

	void set_age(int a)
	{
		age = a;
	}

	void set_height(int h)
	{
		height = h;
	}

	void set_name(string n)
	{
		name = n;
	}

	void set_AI(int num, string n, int a, int h, int i, bool l)
	{
		isInTeam = l;
		isLeader = l;
		name = n;
		age = a;
		id = i;
		height = h;
		nomer = num;
	}
};

class Group // вторая часть задания
{
public:
	Person leader, human2, human3;
	string Gname;

	void get_info()
	{
		cout << Gname << endl;
		cout << "Лидер группы: " << leader.get_name() << endl;
		cout << "Участники: " << human2.get_name() << " and " << human3.get_name() << endl;
	}
	
	void set_Leader(Person l)
	{
		leader = l;
	}
	void set_Gname(string Gn)
	{
		Gname = Gn;
	}
	void set_paty(Person a, Person b)
	{
		human2 = a;
		human3 = b;
	}

};

int main()
{
	setlocale(LC_ALL, "Russian");
	const int count = 7;
	int num, i, ansver = 1, ansver1 = 1, ansver2, ansver3, nomer;
	string nazv;
	Person human[count];
	human[0].set_AI(0,"NuN", 0, 0, 00000000, false);
	human[1].set_AI(1,"Alex", 20, 175, 22222221, false);
	human[2].set_AI(2,"Yarik", 22, 222, 22222222, false);
	human[3].set_AI(3,"Robert", 31, 181, 22222223, false);
	human[4].set_AI(4,"Putin", 67, 167, 22222224, false);
	human[5].set_AI(5,"julya", 19, 151, 22222225, false);
	human[6].set_AI(6,"Maks", 18, 177, 22222226, false);
	Group group[2];
	
			cout << "Хотите узнать Полную или Краткую информацию о людях ? " << endl;
			cout << "1 - Вывести краткую инфу \n" << "2 - Вывести полную инфу \n";
			cin >> num;
			switch (num)
			{
			case 1:
			{	
				cout << "Краткая информация: \n ";
				for (int i = 1; i < 7; i++)
				cout << human[i].get_small() << endl; // выводим краткую информацию
			}
			break;
			case 2:
			{
				cout << "Полная информация: \n";
				for (int i = 1; i < 7; i++)
				cout << human[i].get_full() << endl; // выводим полную информацию
			}
			break;
			default:
				break;
			}

	// изменить инфу о человеке
	while (ansver1 != 0)
	{
		cout << "Хотите изменить о ком нибудь информацию?" << endl;
		cout << "0 - No \n1 - Yap \n";
		cin >> ansver1;
		if (ansver1 == 1)
		{
			cout << "Введите номер человека \n";
			cin >> ansver2;
			cout << "Что вы хотите изменить? \n";
			cout << "1 - Имя \n2 - Возраст \n3 - Рост \n4 - id " << endl;
			cin >> ansver3;
			switch (ansver3)
			{
			case 1:
			{
				string newName = "NuN";
				cout << "Введите новое имя: ";
				cin >> newName;
				human[ansver2].set_name(newName);
			}
			break;
			case 2:
			{
				int newAge = 0;
				cout << "Введите новый возраст: ";
				cin >> newAge;
				human[ansver2].set_age(newAge);
			}
			break;
			case 3:
			{
				int newHeight = 0;
				cout << "Введите новый рост: ";
				cin >> newHeight;
				human[ansver2].set_height(newHeight);
			}
			break;
			case 4:
			{
				int newId = 00000000;
				cout << "Введите новое id: ";
				cin >> newId;
				human[ansver2].set_id(newId);
			}
			break;
			}
			cout << human[ansver2].get_full() << endl;
		}

	}

	// Называем группу и выбираем в ней лидера
	cout << "Назовите первую группу" << endl; // Спросить название для 1 группы
	cin >> group[0].Gname; //group[1].set_Gname(nazv);
	cout << "Выберите первый номер будущего Лидера" << endl; // Спросить кто будет лидером в ней 
	cin >> i;
	// !if (human[i].isLeader == false)! первым лидером может стать любой человек
	group[0].set_Leader(human[i]);
	human[i].isLeader = true;
	human[i].isInTeam = true;
	cout << "Назовите вторую группу" << endl; // Спросить название для 2 группы
	cin >> group[1].Gname; //group[1].set_Gname(nazv);
	cout << "Выберите второй номер будущего Лидера" << endl; // Спросить кто будет лидером в ней 
	cin >> i;
	if (human[i].isLeader == false)
	{
		group[1].set_Leader(human[i]);
		human[i].isLeader = true;
		human[i].isInTeam = true;
	}
	else
	{
		cout << "Этот человек уже является лидером, выберите другого. \n";
		cin >> i;
		group[1].set_Leader(human[i]);
		human[i].isLeader = true;
		human[i].isInTeam = true;
	}
	int y = 0;
	while (y != 4)
	{
		for (int i = 1; i < 7; i++)
		{
			if ((human[i].isInTeam == false) and (y == 0))
			{
				group[0].human2 = human[i];
				human[i].isInTeam = true;
				y++;
			}
			if ((human[i].isInTeam == false) and (y == 1))
			{
				group[0].human3 = human[i];
				human[i].isInTeam = true;
				y++;
			}
			if ((human[i].isInTeam == false) and (y == 2))
			{
				group[1].human2 = human[i];
				human[i].isInTeam = true;
				y++;
			}
			if ((human[i].isInTeam == false) and (y == 3))
			{
				group[1].human3 = human[i];
				human[i].isInTeam = true;
				y++;
			}
		}
	}

	cout << "Название первой группы: ";
	group[0].get_info();
	cout << "Название второй группы: ";
	group[1].get_info();

	system("pause");
	return 0;
}