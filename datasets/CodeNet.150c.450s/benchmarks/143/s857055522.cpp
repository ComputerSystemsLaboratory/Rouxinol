#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
int main()
{
  int n, q, t;
  ll ans = 0;
  cin >> n;
  map<string, ll> a;
  rep(i, n)
  {
    cin >> t;
    a[to_string(t)]++;
    ans += t;
  }

  cin >> q;
  ll b, c;
  rep(i, q)
  {
    cin >> b >> c;
    ans = ans - b * a[to_string(b)] + c * a[to_string(b)];
    a[to_string(c)] += a[to_string(b)];
    a[to_string(b)] = 0;
    cout << ans << endl;
  }
}
