#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int m, small, big, P[201];
 
  while(cin >> m >> small >> big, m) {
    for(int i = 1; i <= m; i++) {
      cin >> P[i];
    }
    int calc = 0;
    for(int i = big; i >= small; i--) {
      calc = max(calc, P[i] - P[i + 1]);
    }
    for(int i = big; i >= small; i--) {
      if(calc == P[i] - P[i + 1]) {
        cout << i << endl;
        break;
      }
    }
  }
  return(0);
}