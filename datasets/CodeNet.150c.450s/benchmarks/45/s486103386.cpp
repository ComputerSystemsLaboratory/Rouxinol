#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;
string char_to_string(char val) {
  return string(1, val);
}
int char_to_int(char val) {
  return val - '0';
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
int vector_finder(std::vector<ll> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}
struct edge {
  ll to, cost;
};

long long modpow(long long a, long long n, long long mod) {
  if(n == 0) {
    return 1;
  } else if(n % 2 == 1) {
    return modpow(a, n - 1, mod) * a % mod;
  } else {
    ll t = modpow(a, n / 2, mod);
    return t * t % mod;
  }
}

int main() {
  int m; ll n; cin >> m >> n;
  cout << modpow(m, n, pow(10, 9) + 7) << endl;
}
