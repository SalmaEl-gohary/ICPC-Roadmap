#include <iostream>

using namespace std;

int main()
{
	int M,N;
	
	cin >> M >> N;
	
	while (M > 0 && N > 0)
	{
		int sum = 0;
		int s = M > N ? N:M;
		int b = M > N ? M:N;
		for (;s<= b;s++)
		{
			cout << s << " ";
			sum += s;
		}
		cout << "Sum="<< sum <<"\n";
		cin >> M >> N;
	}
	
	return 0;
	
}