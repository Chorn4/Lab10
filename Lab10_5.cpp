#include<iostream>
#include<Windows.h>
#include<math.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float priklad, x, y;
	//�������� x, y
	cout << "������ �������� x �� y ��� ��������" << endl;
	cout << "�������� x: ";
	cin >> x;
	cout << "�������� y: ";
	cin >> y;
	// ������� ����������
	if ( ((x + 2) / (3 * y + 1)) < 0) {
		cout << "�������, ����� �� ������� � ������ �������� �1 ������ �� 0, ��������� ���� �������� x ��� y";
		return 0;
	}
	else if ( (3 * y + 1) == 0) {
		cout << "�������, � ����� �������� �2 ������ ��������� = 0, ��������� ���� �������� y";
		return 0;
	}
	else if ( (1 - 9 * pow(y, 2)) == 0) {
		cout << "�������, � ������ �������� �2 ��������� = 0, ��������� ���� �������� y";
		return 0;
	}
	else if ( 9 * y + 3 == 0 ) {
		cout << "�������, � ������ �������� �3 ��������� = 0, ��������� ���� �������� y";
	    return 0;
	}
	// �������
	priklad = sqrt((x + 2) / (3 * y + 1)) + ((8 * pow(x, 2) + 3) / (1 - 9 * pow(y, 2))) * ((x + 0, 5) / (9 * y + 3));
	cout << "������� = " << priklad;


	return 0;
}