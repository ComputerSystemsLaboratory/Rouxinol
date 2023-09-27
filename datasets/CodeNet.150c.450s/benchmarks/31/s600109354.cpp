#include <iostream>
using ll = long long int;
using namespace std;

int main() {
  ll n, min, ans = -1e9;
  cin >> n;
  cin >> min;
  for (ll i = 1; i < n; i++) {
    ll r;
    cin >> r;
    if (r - min > ans) {
      ans = r - min;
    }
    if (r < min) {
      min = r;
    }
  }
  cout << ans << endl;
  return 0;
}