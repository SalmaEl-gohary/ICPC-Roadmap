/* A. Team 
   https://codeforces.com/contest/231/problem/A
*/

#include <iostream> 

using namespace std;

int main()
{
	int n, in, c, p;
	p = 0;
	
	cin >> n;
	
	for (int i = 0; i <n; i++)
	{
		c = 0;
		for (int j = 0; j < 3; j++)
		{
			cin >> in;
			c += in;
		}
		if (c > 1) p++;
	}
	cout << p << endl;
	
	return 0;
}