// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	string x;
	cout << "Введите имя: ";
	getline(cin, x);
	cout << endl << "Привет , " << x << endl;
	system("pause");
	return 0;
}

