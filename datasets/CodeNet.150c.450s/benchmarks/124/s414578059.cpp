#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <cstring>
#include <cmath>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n)-1; i >= k; i--)

#define debug(x) cerr<<#x<<": "<<x<<'\n'

#define fi first
#define se second

#define vi vector<int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount

typedef long long ll;

const ll inf = 99900100100;
const int MOD = 998244353;
const double EPS = 1e-9;

vector<vector<pair<int,int> > > G(1100);

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    rep(i,n){
      int u,k;
      cin >> u >> k;
      rep(j,k){
        int v,c;
        cin >> v >> c;
        G[u].push_back(mp(v,c));
      }
    }
    ll d[1100] = {};
    rep(i,1100) d[i] = inf;
    d[0] = 0LL;
    while(true){
        bool update = false;
        rep(i,n){
          for(auto o : G[i]){
            if(d[o.fi] > d[i]+o.se){
                d[o.fi] = d[i]+o.se;
                update = true;
            }
          }
        }
        if(!update) break;
    }
    rep(i,n) cout << i << " " << d[i] << endl;
    return 0;
}

