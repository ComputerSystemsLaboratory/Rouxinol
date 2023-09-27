#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;
  map<string, int> ans;
  rep(i, n) {
    string s;
    cin >> s;
    ans[s]++;
  }
  // for (auto el : ans) {
  //   cout << el.first << " x " << el.second << endl;
  // }
  cout << "AC x " << ans["AC"] << endl;
  cout << "WA x " << ans["WA"] << endl;
  cout << "TLE x " << ans["TLE"] << endl;
  cout << "RE x " << ans["RE"] << endl;
  return 0;
}