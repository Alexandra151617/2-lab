// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <locale>;
#include "windows.h";
using namespace std;


void main(void)
{
	//etlocale(LC_ALL, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "1)Ім'я: Воробей Олександра Олександрівна\n" << endl;
	cout << "2) Дата народження: 1 листопада 1998 року\n" << endl;
	cout << "3) Місце народження: м.Вінниця\n" << endl;
	cout << "Країна : Україна\n" << endl;
	cout << "день : Понеділок\n" << endl;
	cout << "Перше слово : мама\n" << endl;
	cout << "вага: 31000\n" << endl;
	cout << "Захоплення : Кінннота\n" << endl;
	cout << "рік захоплення : 2003\n" << endl;
	system("pause");
}

