#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//�������� 1:
	cout << "ʳ������ ������ � ���: " << 60 * 60 * 24 << endl;
	cout << "ʳ������ ������ � ����: " << 60 * 60 * 24 * 7 << endl;
	cout << "ʳ������ ������ � ����: " << 60 * 60 * 24 * 365 << endl << endl;
	//�������� 2:
	float price1 = 10, price2 = 200, p;

	cout << "������ ������� �� ���� ��������� ����: ";
	cin >> p;
	cout << "ֳ�� ������� ������ ��:" << price1 << endl << "ֳ�� ������� ������ ����: " << price1 + price1 * (p / 100) << endl << endl;
	cout << "ֳ�� ������� ������ ��:" << price2 << endl << "ֳ�� ������� ������ ����: " << price2 + price2 * (p / 100);




	return 0;
}