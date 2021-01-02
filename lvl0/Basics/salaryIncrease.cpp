/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1048
    Salary Increase - urionlinejudge
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double salary, per;
	
	cin >> salary;
	
	if (salary <= 400)   per = 0.15;
	
	else if (salary <= 800)   per = 0.12;
		
	else if ( salary <= 1200)  per = 0.1;
		
	else if ( salary <= 2000) per = 0.07;
		
	else per = 0.04;
		
	cout <<fixed << setprecision(2);
	cout << "Novo salario: "<< salary + per*salary << "\n";
	cout << "Reajuste ganho: "<< per * salary << "\n";
	cout << fixed << setprecision(0)<< "Em percentual: "<< per*100 << " %\n";
		

	return 0;	
}		
