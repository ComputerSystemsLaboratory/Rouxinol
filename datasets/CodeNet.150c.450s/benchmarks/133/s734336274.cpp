#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;

int main() {
  int d;
  cin >> d;
  ll ans = 0;
  vector<int> open(26, -1);
  vector<ll> c(26);
  vector<vector<ll>> score(d, vector<ll>(26));
  rep(i, 26){
    cin >> c[i];
  }
  rep(i, d){
    rep(j,26){
      cin >> score[i][j];
    }
  }
  rep(i, d){
    int tmp;
    cin >> tmp;
    tmp--;
    ans += score[i][tmp];
    open[tmp] = -1;
    rep(i, 26){
      if(i != tmp){
        open[i]++;
        ans -= c[i] * (open[i] + 1);
      }
    }
    cout << ans << endl;
  }
}