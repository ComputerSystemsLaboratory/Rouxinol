#include <iostream>

using namespace std;

int n, a[2010];

// i番目以降の要素を使って、mを作れればtrue、作れなければfalse
bool solve(int i, int m) {
  //cout << i << "," << m << endl;
  if (m == 0) {
    return true;
  }
  if (i >= n) {
    return false;
  }
  bool res = solve(i+1, m) || solve(i+1, m-a[i]);
  return res;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int m ;
    cin >> m;
    //cout << m << "----" <<endl;
    if (solve(0, m)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
}

