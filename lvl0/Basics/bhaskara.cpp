/*
   https://www.urionlinejudge.com.br/judge/en/problems/view/1036
   Bhaskara's Formula  - urionlinejudge
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double A,B,C,inter;
	cin >> A >> B >> C;
	inter = B*B - 4*A*C;
	if (A == 0 ||  inter< 0 )
	{
		cout << "Impossivel calcular\n";
	}
	else
	{
		cout << fixed << setprecision(5);
		cout << "R1 = "<< (-B + sqrt(inter))/(2*A) << "\n";
		cout << "R2 = "<< (-B - sqrt(inter))/(2*A) << "\n";
		
	}
	return 0;
	
}
