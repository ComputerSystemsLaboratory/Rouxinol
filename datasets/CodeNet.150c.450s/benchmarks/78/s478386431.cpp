#include <bits/stdc++.h>
using namespace std;

#define rep(i,j,n) for(int i=j;i<n;++i)
#define all(i) i.begin(),i.end()
#define rall(i) i.rbegin(), i.rend()
#define INF 1e9
#define LINF 1e18
const int mod = 1e9 + 7;

typedef long long i64;
typedef pair<int, int> pi;

template <class T> using vt = vector<T>;
template <class T> using vvt = vector<vector<T>>;

i64 gcd(i64 n, i64 m) {return (m == 0? n : gcd(m, n % m));}
i64 lcd(i64 n, i64 m) {return (n / gcd(n, m) * m);}
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vt<int> vec;
  for(int i = 1, num = 1; num <= 1e6; ++i, num = i * (i + 1) * (i + 2) / 6) {
    vec.push_back(num);
  }

  vt<int> dp1(1e6 + 1, INF), dp2(1e6 + 1, INF);
  dp1[0] = dp2[0] = 0;
  rep(i, 1, 1e6 + 1) {
    rep(j, 0, vec.size()) {
      if(i >= vec[j]) {
        dp1[i] = min(dp1[i], dp1[i - vec[j]] + 1);
        if(vec[j] % 2 == 1) dp2[i] = min(dp2[i], dp2[i - vec[j]] + 1);
      }
    }
  }

  int n;
  while(cin >> n, n != 0) cout << dp1[n] << " " << dp2[n] << endl;
}
