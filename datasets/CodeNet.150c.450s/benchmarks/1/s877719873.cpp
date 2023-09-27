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

template <class T>
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
vector<ll> a;

int main() {
  cin >> n;
  a = vector<ll>(n);
  REP(i, n) {
    cin >> a[i];
    a[i]++;
  }

  ll amax = *max_element(a.begin(), a.end());
  vector<ll> dp(n + 1, 0);
  dp[0] = -(amax + 1);

  REPD(i, n) {
    ll index = distance(dp.begin(), upper_bound(dp.begin(), dp.end(), -(a[i] + 1)) - 1);
    dp[index + 1] = -a[i];
  }

  REPD(i, n + 1) {
    if (dp[i] != 0) {
      cout << i << endl;
      break;
    }
  }
}

