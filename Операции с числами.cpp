// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	float a, b;
	char c;
	cin >> a >> c >> b;
	cout << endl;
	if ((int)c == 43) cout << a + b;
	if ((int)c == 42) cout << a * b;
	if ((int)c == 45) cout << a - b;
	if ((int)c == 47) cout << a / b;
	cout << endl;
	system("pause");
    return 0;
}

