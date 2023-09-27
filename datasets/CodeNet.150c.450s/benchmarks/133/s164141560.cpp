#include <bits/stdc++.h>
using namespace std;
#define forr(i,m,n) for (int i=(m); i<=(n); i++)
#define forv(i,m,n) for (int i=(m); i>=(n); i--)
#define forall(it,p) for (auto it = p.begin(); it != p.end(); ++it)
#define R 1000000007
#define DBG 1
typedef pair<int,int> pii;
typedef long long ll;
typedef pair<ll,ll> pll;

#define MAXN 100000
int a[MAXN];

int main() {
  int d;
  cin >> d;
  vector<int> c(26);
  forr(i,0,25)
    cin >> c[i];
  vector< vector<int> > s(d, vector<int>(26));
  forr(i,0,d-1)
    forr(j,0,25)
      cin >> s[i][j];
  vector<int> t(d);
  forr(i,0,d-1) {
    cin >> t[i];
    t[i]--;
  }

  vector<int> last(26,-1);
  int sc = 0;
  forr(i,0,d-1) {
    int tt = t[i];
    last[tt] = i;
    forr(j,0,25) sc -= c[j]*(i-last[j]);
    sc += s[i][tt];
    cout << sc << endl;
  }
}
