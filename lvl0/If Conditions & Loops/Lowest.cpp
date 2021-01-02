/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1180
    Lowest Number and Position  - urionlinejudge
*/

#include <iostream>

using namespace std;

int main()
{
	int N;
	int s = 0;

	cin >> N;
	
	int X[N];
	
	for (int i = 0; i<N;i++)
	{
		cin >> X[i];
		if (X[i] < X[s]) s = i;
	}
	
	cout << "Menor valor: " <<  X[s] <<"\n";
	cout << "Posicao: " << s << "\n";
	
}
