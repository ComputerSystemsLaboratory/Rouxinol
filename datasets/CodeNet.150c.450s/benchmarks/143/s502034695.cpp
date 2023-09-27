#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n)                    \
  for (int i = 0; i < (int)(n); i++) \
    ;

#define _GLIBCXX_DEBUG
#define _LIBCPP_DEBUG 0

int main() {
  long n;
  cin >> n;

  vector<ll> a(n);

  map<ll, ll> count;

  ll s = 0;
  for (ll &x : a) {
    ll tmp;
    cin >> tmp;
    s += tmp;
    x = tmp;

    count[tmp]++;
  }

  ll q;
  cin >> q;
  for (long i = 0; i < q; i++) {
    ll b, c;
    cin >> b >> c;

    s -= b * count[b];
    s += c * count[b];
    count[c] += count[b];
    count.erase(b);

    cout << s << endl;
  }
}
