#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i=0; i < int(n); i++)
typedef vector<int> VI;


int main() {
	int n;
  cin >> n;
  VI a(n);
  rep(i, n) cin >> a[i];

  int q;
  cin >> q;

  const int M_MAX = 2001;
  VI canMake(M_MAX);
  rep(st, 1 << n) {
    int val = 0;
    rep(i, n) if (st & (1 << i)) val += a[i];
    if (val < M_MAX) canMake[val] = true;
  }

  rep (qi, q) {
    int m;
    cin >> m;
    if (canMake[m]) cout << "yes\n";
    else cout << "no\n";
  }
  return 0;
}