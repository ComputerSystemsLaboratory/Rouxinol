#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int D;
int c[26];
int s[365][26];

long long calc(vector<int>& t, int d) {
  vector<int> last(26);
  long long ans = 0;
  rep(i, d) {
    int x = t[i];
    ans += s[i][x];
    ans -= c[x] * (i - last[x]) * ((i - last[x]) - 1) / 2;
    last[x] = i;
  }
  rep(i, 26) { ans -= c[i] * (25 - last[i]) * ((26 - last[i]) - 1) / 2; }
  return ans;
}

long long calc1(vector<int>& last, int n, int d) {
  long long ans = s[d][n];
  rep(i, 26) ans -= c[i] * (d - last[i]);
  return ans;
}

int main(){
  cin >> D;
  rep(i, 26) cin >> c[i];
  rep(i, D) rep(j, 26) cin >> s[i][j];

  vector<int> t(D); 
  rep(i, D) {
    cin >> t[i];
    t[i]--;
  }
  vector<int> last(26, -1);
  long long ans = 0;
  rep(i, D) {
    last[t[i]] = i;
    ans += calc1(last, t[i], i);
    cout << ans << endl;
  }
}
