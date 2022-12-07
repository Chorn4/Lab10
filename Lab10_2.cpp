#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ax = 0, ay = 0, bx = 3, by = 2, cx = -3, cy = 4;
	float s1, s2, s3, p;

	cout << "����� 1: (" << ax << ";" << ay << ")" << endl;
	cout << "����� 2: (" << bx << ";" << by << ")" << endl;
	cout << "����� 3: (" << cx << ";" << cy << ")" << endl << endl;

	s1 = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
	s2 = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
	s3 = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));
	p = (s1 + s2 + s3) / 2;

	cout << "������� 1: " << s1 << endl;
	cout << "������� 2: " << s2 << endl;
	cout << "������� 3: " << s3 << endl << endl;

	cout << "1)���������� ����������: " << sqrt(s1 * s2 * (s1 + s2 + s3) * (s1 + s2 - s3)) / (s1 + s2) << endl <<endl;
	cout << "2)����� ��������� ���� ����������: " << sqrt((p - s1) * (p - s2) * (p - s3) / p);

	return 0;
}