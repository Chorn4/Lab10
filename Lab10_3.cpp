#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float z1, z2, a;

	cout << "Введіть значення a: ";
	cin >> a;

	if ((cos(a) + 1 - 2 * pow(sin(2 * a), 2)) == 0) {
		cout << "На нуль ділити не можна ;(";

		return 0;
	}
	
	cout << "z1= " << (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 * a), 2)) << endl;
	cout << "z2= " << 2 * sin(a);
	
	return 0;
}