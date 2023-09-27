#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vpii> vvpii;

int main() {
  string strs[9] = {{".,!? "}, {"abc"},  {"def"}, {"ghi"}, {"jkl"},
                    {"mno"},   {"pqrs"}, {"tuv"}, {"wxyz"}};
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string ans = "", sw;
    cin >> sw;
    int a = 0, b = 0;
    for (int j = 0; j < sw.size(); j++) {
      if (sw[j] == '0' && b >= 1) {
        ans += strs[a - 1][(b + strs[a - 1].size() - 1) % strs[a - 1].size()];
        a = 0, b = 0;
      }
      if (sw[j] == '0')
        continue;
      else {
        a = sw[j] - '0';
        b++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}