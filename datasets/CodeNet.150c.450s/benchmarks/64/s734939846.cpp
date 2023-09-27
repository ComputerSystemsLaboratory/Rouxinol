#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) begin(v), end(v)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for(int i = (int)(s); i < (int)(n); i++)

template<class T1, class T2> void chmin(T1 &a, T2 b){if(a>b)a=b;}
template<class T1, class T2> void chmax(T1 &a, T2 b){if(a<b)a=b;}

using pint = pair<int, int>;
using tint = tuple<int, int, int>;
using vint = vector<int>;

const int inf = 1LL << 55;
const int mod = 1e9 + 7;

bool solve(int n, int A[], int m, int idx) {
  if(m == 0) return true;
  if(m < 0) return false;
  reps(i, idx, n) {
    if(solve(n, A, m-A[i], i+1)) return true;
  }
  return false;
}

signed main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cout << fixed << setprecision(12);

  int n, A[22], q, m[202];
  cin >> n;
  rep(i, n) cin >> A[i];
  cin >> q;
  rep(i, q) cin >> m[i];
  rep(i, q) {
    if(solve(n, A, m[i], 0)) cout << "yes" << endl;
    else cout << "no" << endl;
  }

  return 0;
}