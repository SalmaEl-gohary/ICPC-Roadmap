/* 
     https://www.urionlinejudge.com.br/judge/en/problems/view/1019
     Time Conversion - urionlinejudge
*/

#include <bits/stdc++.h>

using namespace std;

int main() {


     int N;
     cin >> N;
     int hr = N / 3600;
     int minutes =(N - (hr * 3600)) / 60;
     int sec = N - ((hr * 3600) + (minutes * 60));

     cout << hr << ":" << minutes << ":" << sec << endl;

    return 0;
}
