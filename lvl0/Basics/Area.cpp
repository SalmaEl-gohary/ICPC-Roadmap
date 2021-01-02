/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1012
    Area - urionlinejudge
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double A,B,C;
	cin >> A >> B >> C;
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: "<< (0.5 * A * C) << "\n";
	cout << "CIRCULO: "<< (3.14159 * C * C) << "\n";
	cout << "TRAPEZIO: "<< 0.5*(A + B) * C << "\n";
	cout << "QUADRADO: "<< B * B << "\n";
	cout << "RETANGULO: "<< A * B << "\n";
	
	return 0;
	
}
