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

  int n, m;
  while(cin >> n >> m, n != 0 && m != 0) {
    vt<int> sum_h(n + 1, 0), sum_w(m + 1, 0);
    rep(i, 0, n) {
      int h;
      cin >> h;
      sum_h[i + 1] += sum_h[i] + h;
    }
    rep(i, 0, m) {
      int w;
      cin >> w;
      sum_w[i + 1] += sum_w[i] + w;
    }

    map<int, i64> cnt_h, cnt_w;
    rep(i, 0, n + 1) {
      rep(j, i + 1, n + 1) {
        cnt_h[sum_h[j] - sum_h[i]]++;
      }
    }
    rep(i, 0, m + 1) {
      rep(j, i + 1, m + 1) {
        cnt_w[sum_w[j] - sum_w[i]]++;
      }
    }

    i64 ans = 0;
    for(auto &it : cnt_h) {
      if(cnt_w.count(it.first)) ans += it.second * cnt_w[it.first];
    }
    cout << ans << endl;
  }
}
