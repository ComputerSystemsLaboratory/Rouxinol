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

int n, m, a;
bool no[20][20] = {};
int point[20][20];

int rec(int i, int j)
{
  if (no[i][j] == true) return 0;
  if (i == 0 || j == 0) return 0;
  if (i == 1 && j == 1) return 1;

  return point[i][j] = rec(i - 1, j) + rec(i, j - 1);
}

signed main(void)
{
  while (true){
    cin >> n >> m;
  
    if (n == 0 && m == 0) break;
  
    cin >> a;

    memset(no, false, sizeof(no));
    memset(point, 0, sizeof(point));

    rep(i, a){
      int x, y;
      cin >> x >> y;

      no[x][y] = true;
    }
  
    cout << rec(n, m) << endl;
  }

  return (0);
}