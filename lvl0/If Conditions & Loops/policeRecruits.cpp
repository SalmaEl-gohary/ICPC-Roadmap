/* 
	https://codeforces.com/contest/427/problem/A
	A. Police Recruits - CodeForces
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,p;
	int h = 0, u = 0;
	
	cin >> n;
	
	for (int i= 0; i< n; i++)
	{
		cin >> p;
		h += p;
		if (h < 0) 
		{
			u += abs(h);
			h = 0;
		}
	}
	cout << u ;
	return 0;
}
	
	
	