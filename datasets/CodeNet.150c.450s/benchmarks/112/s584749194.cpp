#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) begin(v), end(v)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for(int i = (int)(s); i < (int)(n); i++)
#define min(...) min({__VA_ARGS__})
#define max(...) max({__VA_ARGS__})

template<class T1, class T2> void chmin(T1 &a, T2 b){if(a>b)a=b;}
template<class T1, class T2> void chmax(T1 &a, T2 b){if(a<b)a=b;}

using pint = pair<int, int>;
using tint = tuple<int, int, int>;
using vint = vector<int>;

const int inf = 1LL << 55;
const int mod = 1e9 + 7;

signed main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cout << fixed << setprecision(12);

  int n, m;
  while(cin >> n, n) {
    map<char, char> mp;
    rep(i, n) {
      char x, y;
      cin >> x >> y;
      mp[x] = y;
    }
    cin >> m;
    rep(i, m) {
      char c;
      cin >> c;
      cout << (mp.count(c) ? mp[c] : c);
    }
    cout << endl;
  }

  return 0;
}