#include <iostream>
using namespace std;

int n, A[22];

// 入力値の m から選んだ要素を引いていく再帰関数
// 計算量 O(2^n)
int solve(int i, int m) {
  if(m == 0) return 1;
  if(i >= n) return 0;
  int res = solve(i+1, m) || solve(i+1, m-A[i]);
  return res;
}

signed main() {
  

  cin >> n;
  for(int i = 0; i < n; i++) cin >> A[i];
  int q; cin >> q;
  for(int i = 0; i < q; i++) {
    int m; cin >> m;
    cout << (solve(0, m) ? "yes" : "no") << endl;
  }
}

