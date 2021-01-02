/* 
    https://codeforces.com/problemset/problem/318/A
    Even Odds - CodeForces 
*/

#include <iostream>

using namespace std;

int main()
{
	long long n,k;
	int rem = 0;
	cin >> n >> k;
	
	rem = n%2;
	
	
	if (k <= (n+rem)/2)
	{
		cout << 2*k -1 << "\n";
	
	}
	else
	{
		cout << 2*k - (n + rem) << "\n";
		
	}
	
	return 0;
	
}
