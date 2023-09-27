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

int n;

void maxHeapify(vector<int>& h, int i) {
  int l = 2*i, r = 2*i+1, m = i;
  if (l <= n && h[l] > h[m]) m = l;
  if (r <= n && h[r] > h[m]) m = r;

  if (m != i) {
    swap(h[i], h[m]);
    maxHeapify(h, m);
  }
}

int main() {
  cin >> n;
  vector<int> h(n+1);
  FOR(i, 1, n+1) {
    cin >> h[i];
  }

  FORR(i, n/2, 1) {
    maxHeapify(h, i);
  }

  FOR(i, 1, n+1) {
    cout << " " << h[i];
  }
  cout << endl;

  
  return 0;
}
