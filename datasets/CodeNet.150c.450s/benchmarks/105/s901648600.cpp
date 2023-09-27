#pragma region template
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vvvll = vector<vvll>;
using vld = vector<ld>;
using vvld = vector<vld>;
using vvvld = vector<vvld>;
using vs = vector<string>;
using pll = pair<ll, ll>;
using vp = vector<pll>;
template <typename T>
using pqrev = priority_queue<T, vector<T>, greater<T>>;
#define rep(i, n) for (ll i = 0, i##_end = (n); i < i##_end; i++)
#define repb(i, n) for (ll i = (n)-1; i >= 0; i--)
#define repr(i, a, b) for (ll i = (a), i##_end = (b); i < i##_end; i++)
#define reprb(i, a, b) for (ll i = (b)-1, i##_end = (a); i >= i##_end; i--)
#define ALL(a) (a).begin(), (a).end()
#define SZ(x) ((ll)(x).size())
//*
constexpr ll MOD = 1e9 + 7;
/*/
constexpr ll MOD = 998244353;
//*/
constexpr ll INF = 1e+18;
constexpr ld EPS = 1e-12L;
constexpr ld PI = 3.14159265358979323846L;
constexpr ll GCD(ll a, ll b) { return b ? GCD(b, a % b) : a; }
constexpr ll LCM(ll a, ll b) { return a / GCD(a, b) * b; }
template <typename S, typename T>
constexpr bool chmax(S &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <typename S, typename T>
constexpr bool chmin(S &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
#ifdef OJ_LOCAL
#include "dump.hpp"
#else
#define dump(...) ((void)0)
#endif
template <typename T>
bool print_(const T &a) {
  cout << a;
  return true;
}
template <typename T>
bool print_(const vector<T> &vec) {
  for (auto &a : vec) {
    cout << a;
    if (&a != &vec.back()) {
      cout << " ";
    }
  }
  return false;
}
template <typename T>
bool print_(const vector<vector<T>> &vv) {
  for (auto &v : vv) {
    for (auto &a : v) {
      cout << a;
      if (&a != &v.back()) {
        cout << " ";
      }
    }
    if (&v != &vv.back()) {
      cout << "\n";
    }
  }
  return false;
}
void print() { cout << "\n"; }
template <typename Head, typename... Tail>
void print(Head &&head, Tail &&... tail) {
  bool f = print_(head);
  if (sizeof...(tail) != 0) {
    cout << (f ? " " : "\n");
  }
  print(forward<Tail>(tail)...);
}
#pragma endregion

void Pr(bool f){
  cout << (f ? "Yes" : "No") << "\n";
  exit(0);
}

void trans(vll &v){
  ll p = 62;
  ll cur = 0;
  while(p >= 0){
    bool f = 0;
    repr(i, cur, SZ(v)){
      if(v[i] & (1ll << p)){
        swap(v[cur], v[i]);
        f = 1;
        break;
      }
    }
    if(f){
      repr(i, cur+1, SZ(v)){
        if(v[i] & (1ll << p)){
          v[i] ^= v[cur];
        }
      }
      cur++;
    }
    p--;
  }
  sort(ALL(v));
  reverse(ALL(v));
}

ll msb(ll x){
  ll c = 0;
  while(x){
    c++;
    x >>= 1;
  }
  return 1ll << (c-1);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  ll tt;
  cin >> tt;
  while(tt--){
    ll n;
    cin >> n;
    vll a(n);
    rep(i, n){
      cin >> a[i];
    }
    string s;
    cin >> s;
    vll v;
    v.emplace_back(0);
    repb(i, n){
      if(s[i] == '0'){
        v.emplace_back(a[i]);
        trans(v);
      }else{
        ll tmp = a[i];
        rep(j, SZ(v)){
          if(v[j] == 0) break;
          if(tmp & msb(v[j])){
            tmp ^= v[j];
          }
        }
        dump(tmp, a[i]);
        if(tmp != 0){
          print(1);
          goto en;
        }
      }
    }
    print(0);
    en:;
  }
  
}
