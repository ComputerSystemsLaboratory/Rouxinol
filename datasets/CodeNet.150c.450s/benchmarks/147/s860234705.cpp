#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define DD long double

#define M 1000000007
#define INF 1e18

void setIO(string s = "") { 
  cin.sync_with_stdio(0); 
  cin.tie(0);
  cout.tie(0);
  if (s.size()) s += ".in", freopen(s.c_str(), "r", stdin);
}

int tt = 1;
void solve() {
  int n;
  cin >> n;
  vector<int> f (100050);
  
  for (LL i = 1; i <= 105; i++) {
    for (LL j = 1; j <= 105; j++) {
      for (LL k = 1; k <= 105; k++) {
        LL ff = i*i + j*j + k*k + i*j + j*k + i*k;
        if (ff <= n) f[ff]++;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << f[i] << endl;
  }

}

int main() {
  setIO();
  while (tt--) {
    solve();
  }
  return 0;
}