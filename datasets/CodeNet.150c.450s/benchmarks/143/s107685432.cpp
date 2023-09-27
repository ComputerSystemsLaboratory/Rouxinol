#include <iostream>

using namespace std;

typedef long long ll;

int t[100001];

int main() {

  int n, q;
  ll a, b, c, res = 0;

  cin >> n;
  for(int i=0; i<n; ++i) {
    cin >> a;
    ++t[a];
    res += a;
  }

  cin >> q;
  for(int i=0; i<q; ++i) {
    cin >> b >> c;

    if(t[b]!=0) {
      res += (c-b)*t[b];
      t[c] += t[b];
      t[b] = 0;
    }

    cout << res << endl;
  }

  return 0;
}
