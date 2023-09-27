#include <bits/stdc++.h>
using namespace std;

#define rep(i,s,n) for (int i = (int)s; i < (int)n; i++)
#define ll long long
#define pb push_back
#define All(x) x.begin(), x.end()
#define Range(x, i, j) x.begin() + i, x.begin() + j
#define lbidx(x, y) lower_bound(x.begin(), x.end(), y) - x.begin()
#define ubidx(x, y) upper_bound(x.begin(), x.end(), y) - x.begin()
#define BiSearchRangeNum(x, y, z) lower_bound(x.begin(), x.end(), z) - lower_bound(x.begin(), x.end(), y)
#define deg_to_rad(deg) ((((double)deg)/((double)360)*2*M_PI))
#define rad_to_deg(rad) ((((double)rad)/(double)2/M_PI)*(double)360)

template<class T>
inline bool chmax(T &a, T b) {
  if(a < b) {
    a = b;
    return true;
  }
  return false;
};

template<class T>
inline bool chmin(T &a, T b) {
  if(a > b) {
    a = b;
    return true;
  }
  return false;
};

// x^n mod Mを計算する
long long modpow(long long x, long long n, long long M) {
  long long res = 1;
  if (n > 0) {
    res = modpow(x, n / 2, M);
    if (n % 2 == 0) res = (res * res) % M;
    else res = (((res * res) % M) * x) % M;
  }
  return res;
};

int main() {
  int m, n;
  cin >> m >> n;
  int Mod = 1e9+7;
  cout << modpow(m, n, Mod) << endl;
};
