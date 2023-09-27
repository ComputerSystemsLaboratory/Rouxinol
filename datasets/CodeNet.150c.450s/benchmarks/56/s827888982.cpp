#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

const ll INF = 1000000;

int main() {
  ll n;
  cin >> n;
  ll M = -INF, m = INF, sum = 0;
 
  for (ll i = 0; i < n; i++) {
    ll a;
    cin >> a;
    M = max(M, a);
    m = min(m, a);
    sum += a;
  }

  cout << m << " " << M << " " << sum << endl;
  return 0;
}