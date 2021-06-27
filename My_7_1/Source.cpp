#include <iostream>
using namespace std;


double garmon(double x, double y) {
    return 2.0 / (1.0 / x + 1.0 / y);
}

int main() {
	setlocale(LC_ALL, "Rus");


    double x, y;
    cout << "Введите два числа: ";
    cin >> x >> y;
    cout << garmon(x, y);


	return 0;
}
