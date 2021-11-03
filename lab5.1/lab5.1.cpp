// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double a, const double b); // прототип h

int main()
{
	double g, s;

	cout << "g = "; cin >> g;
	cout << "s = "; cin >> s;
	double c = (h(g + 1, s) + pow(h(g, s + 1), 2)) / (1 + pow(h(pow(g, 2), pow(s, 2)), 3));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) // визначення h
{
	return a * a - b * b;
}