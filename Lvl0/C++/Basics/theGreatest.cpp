#include <iostream>

using namespace std;

int maxN(int x,int y)
{
	return (x + y + abs(x - y))/2;
}
int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	cout << maxN(a,maxN(b,c)) << " eh o maior\n";
		
	return 0;
	
}

	
	