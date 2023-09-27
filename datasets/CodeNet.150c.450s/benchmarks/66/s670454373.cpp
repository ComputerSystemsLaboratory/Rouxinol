#include<iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); ++i)

int main() {
  int n, m;
  cin >> n;
  string a[300], b;
  rep (i, n) cin >> a[i];
  bool open = false;
  cin >> m;
  rep (i, m) {
    cin >> b;
    rep (j, n) if (a[j]  == b) {
      open = !open;
      if (open) cout << "Opened by ";
      else cout << "Closed by ";
      goto ok;
    }
    cout << "Unknown ";
  ok:;
    cout << b << endl;
  }
  return 0;
}