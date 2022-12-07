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
	// ����� ��� b
	cout << "������ �������� b (� ����� �� 7): ";
	cin >> b;
	if (b != 7) {
		cout << "�������, ������ ����� � ����� (����� 7)";

		return 0;
	}
	// ����������
	a = pow(b, 3) + log(abs(b));
	c = pow(a, 2) + sqrt(b);
	y = pow(e, x) + pow(5.8, c);

	// 1 �������
	cout << "����� a = " << a << endl;
	// 2 �������
	cout << "����� c = " << c << endl;
	// 3 �������
	cout << "����� y = " << y << endl << endl;
	// ��������� ���������� y = inf
	if (c > 1.8) {
		cout << "����� ������� ������ �������� ������ c, ����� y = inf" << endl;
		cout << "��� �������� ���������� ���������, �������� ������ ������ �������� b (�� ����� 1,99 � �� ����� �� 0)" << endl;
		cout << "������ �������� b: ";
		cin >> b;
		// ������� ����������� ���� ��������
		if (b >= 2) {
			cout << "�������, ��������� ������ �������� b, ��� ���� ���� �� ���� �� 1,99 � �� ����� �� 0" << endl;
			return 0;
		}
		else if (b <= 0) {
			cout << "�������, ��������� ������ �������� b, ��� ���� ���� �� ���� �� 1,99 � �� ����� �� 0" << endl;
			return 0;
		}
		// ����� ���������
		if (b < 2 && b > 0) {
			a = pow(b, 3) + log(abs(b));
			c = pow(a, 2) + sqrt(b);
			y = pow(e, x) + pow(5.8, c);

			cout << "����� a: " << a << endl;
			cout << "����� c: " << c << endl;
			cout << "����� y: " << y << endl;
		}
	}
	return 0;
}