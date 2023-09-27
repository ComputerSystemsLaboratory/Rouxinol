#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repr(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define FORR(i, m, n) for (int i = (m); i >= (n); --i)
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const ll mod2 = 998244353;
const int INF = 1000000005;

int main() {
  int n;
  cin >> n;
  vector<int> h(n+1);
  FOR(i, 1, n+1) {
    cin >> h[i];
  }

  FOR(i, 1, n+1) {
    cout << "node " << i << ": ";
    cout << "key = " << h[i] << ", ";
    if (i != 1) cout << "parent key = " << h[i/2] << ", ";
    if (2*i <= n) cout << "left key = " << h[2*i] << ", ";
    if (2*i+1 <= n) cout << "right key = " << h[2*i+1] << ", ";
    cout << endl;
  }

  
  return 0;
}
