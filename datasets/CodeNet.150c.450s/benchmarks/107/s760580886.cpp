#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define _GLIBCXX_DEBUG

void printv(vector<int> v) {
  for (int i : v)
    cout << i << " ";
  cout << endl;
}


int main() {
  string x, y;
  cin >> x >> y;
  vector<vector<int>> L(1010, vector<int>(1010, 0));
  for (int i = 0; i < 1010; i++) {
    L[0][i] = i;
    L[i][0] = i;
  }
  int lx = x.size(), ly = y.size();
  for (int i = 1; i <= lx; i++) {
    for (int j = 1; j <= ly; j++) {
      if (x[i - 1] == y[j - 1]) {
        L[i][j] = L[i - 1][j - 1];
      } else
        L[i][j] = min(L[i - 1][j - 1], min(L[i - 1][j], L[i][j - 1])) + 1;
    }
  }
  cout << L[lx][ly] << endl;
}

