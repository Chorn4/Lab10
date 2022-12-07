#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const float x = 2.5;
	float a, b, c, y;
	const float e = 2.71828182846;
	// Умова для b
	cout << "Введіть значення b (З умови це 7): ";
	cin >> b;
	if (b != 7) {
		cout << "Помилка, введіть число з умови (число 7)";

		return 0;
	}
	// Розрахунки
	a = pow(b, 3) + log(abs(b));
	c = pow(a, 2) + sqrt(b);
	y = pow(e, x) + pow(5.8, c);

	// 1 приклад
	cout << "Вираз a = " << a << endl;
	// 2 приклад
	cout << "Вираз c = " << c << endl;
	// 3 приклад
	cout << "Вираз y = " << y << endl << endl;
	// Пояснення результату y = inf
	if (c > 1.8) {
		cout << "Через занадто велике значення виразу c, вираз y = inf" << endl;
		cout << "Щоб отримати нормальний результат, пропоную ввести власне значення b (Не більше 1,99 і не менше за 0)" << endl;
		cout << "Введіть значення b: ";
		cin >> b;
		// Можливе виправлення цієї ситуації
		if (b >= 2) {
			cout << "Помилка, спробуйте ввести значення b, щоб воно було не білше за 1,99 і не менше за 0" << endl;
			return 0;
		}
		else if (b <= 0) {
			cout << "Помилка, спробуйте ввести значення b, щоб воно було не білше за 1,99 і не менше за 0" << endl;
			return 0;
		}
		// Новий результат
		if (b < 2 && b > 0) {
			a = pow(b, 3) + log(abs(b));
			c = pow(a, 2) + sqrt(b);
			y = pow(e, x) + pow(5.8, c);

			cout << "Вираз a: " << a << endl;
			cout << "Вираз c: " << c << endl;
			cout << "Вираз y: " << y << endl;
		}
	}
	return 0;
}