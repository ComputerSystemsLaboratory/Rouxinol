#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

ll pow(ll m, ll n, ll mod) {
  ll res = 1;
  while(n > 0) {
	if(n & 1) {
	  res = res * m % mod;
	}
	m = m * m % mod;
	n >>= 1;
  }
  return res;
}
int main() {
  ll a, b;
  cin >> a >> b;
  cout << pow(a, b, 1000000007) << endl;
  return 0;
}