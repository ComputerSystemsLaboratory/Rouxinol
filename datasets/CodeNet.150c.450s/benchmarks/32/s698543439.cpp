// 1600_EntranceExamination.cpp
//
#include <bits/stdc++.h>
using namespace std;
int m, nmin, nmax, res, dif;
int p[10010];
int main() {
  while(cin >> m >> nmin >> nmax && m && nmin && nmax) {
    dif = 0;
    for(int i = 0; i < m; ++i) {
      cin >> p[i];
      if(nmin <= i && i <= nmax && dif <= p[i-1] - p[i]) {
        res = i;
        dif = p[i-1] - p[i];
      }
    }
    cout << res << endl;
  }

  return 0;
}

