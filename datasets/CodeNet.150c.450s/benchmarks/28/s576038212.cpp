#include <utility>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
typedef long long ll;
#define n_MAX 100000
#define w_MAX 10000
using namespace std;

int n,k;
ll T[n_MAX];

// 積載量 P で積める荷物量
int check(ll P){
  int i=0;
  for (size_t j = 0; j < k; j++) {
    ll s=0;
    while (s+T[i]<=P) {
      s += T[i];
      i++;
      if (i==n) return n; // 全て積めた
    }
  }
  return i;
}

int solve(){
  ll left = 0;
  ll right = n_MAX * w_MAX;
  ll mid;
  while (right - left > 1) {
    mid = (left + right) / 2;
    int v = check(mid);
    if (v >= n) right = mid;
    else left = mid;
  }
  return right;
}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  std::cin >> n >> k;

  for (size_t i = 0; i < n; i++) std::cin >> T[i];

  ll ans = solve();

  std::cout << ans << '\n';

  return 0;
}

