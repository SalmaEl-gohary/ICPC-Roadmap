/* 
    https://codeforces.com/problemset/problem/486/A
    Calculating Function - CodeForces 
*/

#include <iostream>

using namespace std;



int main()
{
    long long int n;
    cin >> n;

	if (n%2 ==0)
		cout <<  (n/2) << "\n";
	else
		cout << (-(n+1)/2) << "\n";

    return 0;
}
