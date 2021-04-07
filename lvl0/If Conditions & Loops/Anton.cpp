/* Anton and Danik 
   https://codeforces.com/contest/734/problem/A
*/

#include <iostream>

using namespace std;

int main()
{
	int n, A, D;
	A = D = 0;
	
	cin >> n;
	
	char s[n];
	cin >> s;
	
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'A') A++;
		else 
			D++;
	}
	
	if (A > D) cout << "Anton" << endl;
	else if (A < D) cout << "Danik" << endl;
	else cout << "Friendship" << endl;
	
	return 0;
}