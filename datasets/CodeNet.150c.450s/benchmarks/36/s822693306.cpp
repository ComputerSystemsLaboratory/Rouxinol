#include <bits/stdc++.h>
using namespace std;
/* {{{ */
/*-------------------------------*/
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define RFOR(i, a, b) for(int i = (b) - 1; i >= (a); i--)
#define REP(i, n) for(int i = 0; i < (n); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
#define RREP(i, n) for(int i = (n) - 1; i >= 0; i--)
#define rrep(i, n) for(int i = (n) - 1; i >= 0; i--)

#define all(i) (i).begin(),(i).end()
#define rall(i) (i).begin(),(i).end(),greater<int>()
#define print(x) cout << (x) << endl
#define PB push_back
#define pb push_back
#define mp make_pair
#define FI first
#define SE second

inline int in(){int x;std::cin>>x;return x;}
struct FAST {FAST(){cin.tie(0);ios::sync_with_stdio(false);}} Fast;
typedef long long ll;
typedef pair<int, int> pint;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<long long> llv;
typedef vector<pint> vpint;
/*-------------------------------*/
/* }}} */ 

signed main(void)
{
  int d;

  while (cin >> d){
    int res = 0;
    FOR(i, 1, 600 / d) res += d * i * d * i * d;

    cout << res << endl;
  }

  return 0;
}