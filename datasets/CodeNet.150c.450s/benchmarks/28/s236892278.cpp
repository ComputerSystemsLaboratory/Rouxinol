
#include<iostream>

using namespace std;

typedef long long ll;

ll N, K;
ll W[100000];
 
int check(ll P) {
  int i = 0;
  for (int j = 0; j < K; j++) {
    ll s = 0;
    while(s + W[i] <= P) {
      s += W[i];
      i++;
      if (i == N) {
        return N;
      }
    }
  }
  return i;
}

int solve() {
  ll left = 0;
  ll right = 100000 * 100000;
  ll mid;
  while (right - left > 1) {
    mid = (right + left) / 2;
    int v = check(mid);
    if (v >= N) {
      right = mid;
    } else {
      left = mid;
    }
  }

  return right;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> N >> K;
  for(ll i = 0; i < N; i++) {
    cin >> W[i];
  }

  ll ans = solve();
  cout << ans << endl;

  return 0;
}
