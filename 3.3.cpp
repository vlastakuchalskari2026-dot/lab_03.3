// Lab_03_3.cpp
// Кучальська Власта
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, R;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	if (x <= -R)
		y = x - R;
	else
		if (x > -R && x <= 0)
			y = sqrt(R * R - x * x);
		else
			if (x > 0 && x <= 6)
				y = R - ((x * R) / 6.0);
			else
				y = x - 6;
	cout << endl;
	cout << "y = " << y;

	cin.get();
	return 0;
}