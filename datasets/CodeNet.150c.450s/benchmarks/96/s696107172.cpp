#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(i64 (i) = (s);(i) < (e);(i)++)
#define all(x) x.begin(),x.end()
#define let auto const

int main() {
  vector<string> vec(10);
  vec[1] = ".,!? ";
  vec[2] = "abc";
  vec[3] = "def";
  vec[4] = "ghi";
  vec[5] = "jkl";
  vec[6] = "mno";
  vec[7] = "pqrs";
  vec[8] = "tuv";
  vec[9] = "wxyz";

  i64 n;
  cin >> n;
  rep(q, 0, n) {
    string s;
    cin >> s;
    i64 cnt = -1;
    string ans = "";
    rep(i,0,s.size()) {
      if(s[i] == '0') {
        if(cnt >= 0) {
          auto& v = vec[s[i - 1] + 1 - '1'];
          ans.push_back(v[cnt % v.size()]);
        }
        cnt = -1;
      }
      else {
        cnt++;
      }
    }
    cout << ans << endl;
  }
}

