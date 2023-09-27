#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

struct Matrix {
  int low;
  int col;
};

int main() {
  int n; cin >> n;
  vector<Matrix> l(n);
  rep(i, n) {
    int a, b; cin >> a >> b;
    l.at(i).low = a;
    l.at(i).col = b;
  }

  vector<vector<int>> dp(n, vector<int>(n));
  rep(i, n) {
    dp.at(i).at(i) = 0;
  }

  for (int j = 1; j<n; j++) {
    int i = j-1;
    while (i>=0) {
      int k = i;
      int mi = 100000000;
      while (k < j) {
        mi = min(mi, (l.at(i).low * l.at(k).col * l.at(j).col) + dp.at(i).at(k) + dp.at(k+1).at(j));
        k++;
      }
      dp.at(i).at(j) = mi;
      i--;
    }
  }
  cout << dp.at(0).at(n-1) << endl;
}

