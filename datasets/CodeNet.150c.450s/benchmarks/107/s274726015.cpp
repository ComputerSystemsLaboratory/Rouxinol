#include <bits/stdc++.h>
#include <math.h>
#define PI 3.14159265359
#define ll long long
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define Rep(i, k, n) for(int i = k; i < (int)n; i++)
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int l = s.size();
  int m = t.size();
  vector<vector<int> > a(l + 1, vector<int>(m + 1));
  rep(i, l + 1) {
    a[i][0] = i;
  }
  rep(i, m + 1) {
    a[0][i] = i;
  }
  Rep(i, 1, l + 1) {
    Rep(j, 1, m + 1) {
      a[i][j] = min(a[i - 1][j - 1] + (s[i - 1] != t[j - 1]), min(a[i][j - 1] + 1, a[i - 1][j] + 1));
    }
  }
  cout << a[l][m] << endl;
}


