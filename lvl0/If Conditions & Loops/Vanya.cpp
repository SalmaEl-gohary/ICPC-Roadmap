/* 
     https://codeforces.com/contest/677/problem/A
     A. Vanya And Fence  - CODEFORCES 
*/ 

#include <iostream>

using namespace std;

int main()
{
	int n,h;
	int w = 0;

	cin >> n >> h;
		
	for (int i = 0; i<n;i++)
	{
		int p;
		cin >> p;
		if (p > h) w += 2;
		else w += 1;
	}
	
	cout <<  w <<"\n";	
}
