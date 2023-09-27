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
  while (true){
    int n = in();
    int m;
    string change_before[n];
    string change_after[n];
  
    if (n == 0) break;

    rep(i, n) cin >> change_before[i] >> change_after[i];
    cin >> m;

    rep(i, m){
      string s;
      bool frag = true;
      cin >> s;

      rep(i, n){
        if (s == change_before[i]){
          cout << change_after[i];
          frag = false;
          break;
        }
      }
      if (frag) cout << s;
    }
    cout << endl;
  }

  return 0;
}