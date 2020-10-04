#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// Задача «Конус». Вычислить объем и полную поверхность усеченного конуса.
	double h, r1, r2, S, l, V;
	double pi = 2 * asin(1.0);
	cout << "Enter height: ";
	cin >> h;
	cout << "Enter first radius: ";
	cin >> r1;
	cout << "Enter second radius: ";
	cin >> r2;
	l = sqrt(h * h + (r1 - r2) * (r1));
	V = pi * h * (r1 * r1 + r1 * r2 + r2 * r2) / 3;
	S = pi * (r1 * r1 + l * (r1 + r2) + r2 * r2);
	cout << "Volume = " << V;
	cout << "\nSurface = " << S << endl << endl;

	// Задача «Разветвление». Для произвольных x и a вычислить.
	double x, a, w;
	cout << "x: ";
	cin >> x;
	cout << "a: ";
	cin >> a;
	x = abs(x);
	if (x < 1) {
		w = a * log(x);
	}
	else {
		w = sqrt(a - x * x);
	}
	cout << "w = " << w << endl << endl;

	// Задача «Функция». Для произвольных x, y и b вычислить функцию.
	double x1, y, b, z;
	cout << "x: ";
	cin >> x1;
	cout << "y: ";
	cin >> y;
	cout << "b: ";
	cin >> b;
	z = log(b - y) * sqrt(b - x);
	cout << "z = " << z << endl << endl;

	// Задача «Порядок». Распечатать 10 последовательных
	// натуральных чисел в возрастающем порядке,
	// начиная с произвольного числа N.
	unsigned int N;
	cout << "Enter N: ";
	cin >> N;
	for (int i = 10; i--;) {
		cout << N << " ";
		N += 1;
	}
	cout << endl << endl;

	// Задача «Табуляция». Протабулировать функцию
	// при изменении x от - 4 до + 4 с шагом 0.5.
	double f, k;
	for (k = -4; k <= 4; k += 0.5) {
		f = (k * k - 2 * k + 2) / (k - 1);
		cout << "x: " << k << "\t\ty: " << f << endl;
	}


	return 0;
}
