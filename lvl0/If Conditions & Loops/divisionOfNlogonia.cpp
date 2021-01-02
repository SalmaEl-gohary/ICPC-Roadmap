/*
	https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2493
	Division of Nlogonia - online judge 
*/

#include <iostream>

using namespace std;

int main()
{
	int k, xp, yp, x, y;
	cin >> k;
	
	while (k != 0)
	{
		cin >> xp >> yp;
		for(int i = 0;i <k; i++)
		{
			cin >> x >> y;
			if (x > xp && y > yp) cout << "NE\n";
			else if (x > xp && y < yp) cout << "SE\n";
			else if (x < xp && y > yp) cout << "NO\n";
			else if (x< xp && y < yp) cout << "SO\n";
			else if (x == xp || y == yp) cout << "divisa\n";
			
		}
		cin >> k;
	}
	return 0;
}