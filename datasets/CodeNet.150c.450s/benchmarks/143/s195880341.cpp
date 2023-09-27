#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;

int main()
{
  ll n, sum = 0;
  map<ll, ll> mp;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    sum += x;
    mp[x]++;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    ll b, c;
    cin >> b >> c;
    sum -= mp[b] * b;
    sum += mp[b] * c;
    mp[c] += mp[b];
    mp.erase(b);

    cout << sum << endl;
  }

  return 0;
}