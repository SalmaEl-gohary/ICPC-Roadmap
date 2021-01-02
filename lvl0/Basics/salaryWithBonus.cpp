/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1009
    Salary with Bonus - urionlinejudge 
*/ 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string name;
	double salary, sold;
	
	cin >> name >> salary >> sold;
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ "<< salary + 0.15 * sold << "\n";
	
	return 0;
	
}
