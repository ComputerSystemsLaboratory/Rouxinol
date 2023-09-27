// 2008_PrincessGamble.cpp
//
#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 110;

int n, m, p, pool, sum, result;
int x[MAX_N];

int main() {
  while(cin >> n >> m >> p) {
    sum = 0; result = 0;
    if(n == 0 && m == 0 && p == 0) break;

    for(int i = 1; i <= n; ++i) {
      cin >> x[i];
      sum += x[i] * 100;
    }
    if(x[m] != 0) {
      pool = sum * (100 - p) / 100;
      result = pool / x[m];
    }
    cout << result << endl;
  }
  return 0;
}

