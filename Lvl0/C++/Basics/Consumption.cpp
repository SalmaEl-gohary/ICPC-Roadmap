#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int X;
	double Y;
	cin >> X;
	cin >> Y;
	cout << fixed << setprecision(3) << X/Y << " km/l\n";
	
	return 0;
	
}
