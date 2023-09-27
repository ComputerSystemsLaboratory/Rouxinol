#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T &a, T b) {if (a < b) {a = b;return 1;}return 0;}
template<class T> inline bool chmin(T &a, T b) {if (a > b) {a = b;return 1;}return 0;}

using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  map<string,int> cnt;
  rep(i,n) {
    string s;
    cin >> s;
    cnt[s]++;
  }
  for (string s : {"AC", "WA", "TLE", "RE"}) {
    cout << s << " x " << cnt[s] << endl;
  }
  return 0;
}

