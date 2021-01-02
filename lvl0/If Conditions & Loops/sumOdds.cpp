/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1158
    Sum of Consecuetive Odd Numbers 3 - urionlinejudge
*/

#include <iostream>

using namespace std;

int main()
{
	int n,x,y;
	cin >> n;
	
	for (int i = 0; i< n; i++)
	{
		int sum = 0;
		cin >> x >> y;
		x = x%2 ==0 ? x+1:x;
		while (y > 0)
		{
			sum += x;
			x += 2;
			y--;
		}
		cout << sum << "\n";
	}
	return 0;
	
}
