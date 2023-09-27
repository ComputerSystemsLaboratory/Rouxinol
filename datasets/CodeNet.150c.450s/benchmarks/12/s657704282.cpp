#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;
const ll mod = 1000000007;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
int ctoi(char c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  }
  return 0;
}
ll factorial(ll n) {
  if (n == 1) {
    return 1;
  }
  ll ans = factorial(n-1);
  return ans*n;
}
ll gcd(ll a, ll b) {
  if (a < b) {
    ll tmp = a;
    a = b;
    b = tmp;
  }
  ll r = a%b;
  while(r != 0) {
    a = b;
    b = r;
    r = a%b;
  }
  return b;
}
ll lcm(ll a, ll b) {
  return (a/gcd(a, b))*b;
}

int main() {
  ll n;
  cin >> n;
  vector <ll> v(n);
  rep(i, n) cin >> v.at(i);
  rep(i, n) {
    cout << "node " << i+1 << ": ";
    cout << "key = " << v.at(i) << ", ";
    if (1<=(i+1)/2 && (i+1)/2<=n) {
      cout << "parent key = " << v.at((i+1)/2-1) << ", ";
    }
    if (1<=2*(i+1) && 2*(i+1)<=n) {
      cout << "left key = " << v.at(2*(i+1)-1) << ", ";
    }
    if (1<=2*(i+1)+1 && 2*(i+1)+1<=n) {
      cout << "right key = " << v.at(2*(i+1)) << ", ";
    }
    cout << endl;
  }
}
