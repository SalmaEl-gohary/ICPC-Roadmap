#include <iostream>

using namespace std;



int main()
{
    int n;
    cin >> n;

    string outputTxt[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    if (n > 9) cout << "Greater than 9\n";
    else cout << outputTxt[n];

    return 0;
}