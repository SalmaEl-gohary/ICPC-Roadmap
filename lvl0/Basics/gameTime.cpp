#include <iostream>

using namespace std;

int main()
{
	int stHr, stMin, afHr, afMin;
	int totHr, totMin;
	
	cin >> stHr >> stMin >> afHr >> afMin;
	
	if (afMin < stMin)
	{
		afHr--;
		afMin += 60;
	}
	
	totMin = afMin - stMin;
	totHr = afHr - stHr < 0 ? (24+afHr-stHr):(afHr-stHr);
	if (totHr == 0 && totMin == 0)
	{
		totHr = 24;
	}
	
	cout << "O JOGO DUROU " << totHr << " HORA(S) E "<<totMin<<" MINUTO(S)\n";
	
	return 0;
	
}