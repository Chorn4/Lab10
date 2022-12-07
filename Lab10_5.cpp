#include<iostream>
#include<Windows.h>
#include<math.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float priklad, x, y;
	//Введення x, y
	cout << "Введіть значення x та y для прикладу" << endl;
	cout << "Значення x: ";
	cin >> x;
	cout << "Значення y: ";
	cin >> y;
	// Область визначення
	if ( ((x + 2) / (3 * y + 1)) < 0) {
		cout << "Помилка, вираз під коренем у частині прикладу №1 менший за 0, спробуйте інше значення x або y";
		return 0;
	}
	else if ( (3 * y + 1) == 0) {
		cout << "Помилка, у чатині прикладу №2 виразів знаменник = 0, спробуйте інше значення y";
		return 0;
	}
	else if ( (1 - 9 * pow(y, 2)) == 0) {
		cout << "Помилка, у частині прикладу №2 знаменник = 0, спробуйте інше значення y";
		return 0;
	}
	else if ( 9 * y + 3 == 0 ) {
		cout << "Помилка, у частині прикладу №3 знаменник = 0, спробуйте інше значення y";
	    return 0;
	}
	// Приклад
	priklad = sqrt((x + 2) / (3 * y + 1)) + ((8 * pow(x, 2) + 3) / (1 - 9 * pow(y, 2))) * ((x + 0, 5) / (9 * y + 3));
	cout << "Приклад = " << priklad;


	return 0;
}