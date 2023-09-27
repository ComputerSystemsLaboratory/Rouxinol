#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, a, b) for(long long i = a; i < b; i++)
#define ll long long
using namespace std;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  ll sum = 0;
  rep(i, 0, n) {
    cin >> a[i];
    sum += a[i];
  }
  long long q;
  cin >> q;
  vector<ll> b(100001, 0), c(100001, 0);
  rep(i, 0, q) cin >> b[i] >> c[i];
  vector<ll> s(100000, 0);
  rep(i, 0, n) {
    s[a[i]]++;
  }
  rep(i, 0, q) {
    sum -= s[b[i]] * b[i];
    sum += s[b[i]] * c[i];
    s[c[i]] += s[b[i]];
    s[b[i]] = 0ll;
    cout << sum << "\n";
  }
}