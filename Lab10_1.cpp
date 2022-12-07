#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Завдання 1:
	cout << "Кількість секунд в добі: " << 60 * 60 * 24 << endl;
	cout << "Кількість секунд в тижні: " << 60 * 60 * 24 * 7 << endl;
	cout << "Кількість секунд в році: " << 60 * 60 * 24 * 365 << endl << endl;
	//Завдання 2:
	float price1 = 10, price2 = 200, p;

	cout << "Введіть відсоток на який збільшится ціна: ";
	cin >> p;
	cout << "Ціна першого товару до:" << price1 << endl << "Ціна першого товару після: " << price1 + price1 * (p / 100) << endl << endl;
	cout << "Ціна другого товару до:" << price2 << endl << "Ціна другого товару після: " << price2 + price2 * (p / 100);




	return 0;
}