#include <iostream>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
ll pow(ll m, ll n) {
  if (!n) return 1;
  if (n & 1) return m * pow(m, n -1) % mod;
  return pow(m * m % mod, n / 2);
}
int main() {
  ll m, n;
  cin >> m >> n;
  cout << pow(m, n) << endl;
}