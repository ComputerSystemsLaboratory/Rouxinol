#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;

#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)

#define input(...) __VA_ARGS__; in(__VA_ARGS__)

template<class T>
void print(vector<T> a) {
  cout << "[ ";
  REP(i, a.size()) cout << a[i] << " ";
  cout << "]" << endl;
}

void print() {
  std::cout << std::endl;
}

template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  std::cout << head << " ";
  print(std::forward<Tail>(tail)...);
}

void in() { }

template <class Head, class... Tail>
void in(Head&& head, Tail&&... tail) {
  cin >> head;
  in(std::forward<Tail>(tail)...);
}

ll n;
vector<ll> m;
vector<vector<ll>> table;

#define DP table[left][right]
ll dfs(ll left=0, ll right=n + 1) {
  if (DP != -1) return DP;

  if (right - left <= 2) return DP = 0;
  ll minv = 1ll << 60;
  FOR(c, left + 1, right - 2) {
    minv = min(minv, dfs(left, c + 1) + dfs(c, right) + m[left] * m[c] * m[right - 1]);
  }
  return DP = minv;
}

int main() {
  cin >> n;
  m = vector<ll>(n + 1);
  REP(i, n) {
    cin >> m[i] >> m[i + 1];
  }

  table = vector<vector<ll>>(n + 2, vector<ll>(n + 2, -1));

  cout << dfs() << endl;
}

