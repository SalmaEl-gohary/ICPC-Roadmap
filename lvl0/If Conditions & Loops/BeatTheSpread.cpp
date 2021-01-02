/* 
    https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1753
    Beat The Spread! - online judge 
*/

#include <iostream>

using namespace std;

int main()
{
	int sc1,sc2,n;
	int sum, diff;
	
	cin >> n ;
	for (int i = 0;i<n;i++)
	{
		cin >> sum >> diff;
		
		if ((sum+diff)%2 != 0)
		{
			cout << "impossible\n";
			continue;
		}
		
		sc1 =  (sum + diff) /2;
		sc2 =  sum - sc1;
		
		if (sc1 < 0 || sc2 < 0)
			cout << "impossible\n";
		else 
			cout << sc1 << " " << sc2 << "\n";
		
	}
	return 0;
	
}
		
	
