#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <tuple>
#include <cassert>
#include <exception>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<P> vp;
#define rep(i,a,n) for(ll i = (a);i < (n);i++)
#define per(i,a,n) for(ll i = (a);i > (n);i--)
#define lep(i,a,n) for(ll i = (a);i <= (n);i++)
#define pel(i,a,n) for(ll i = (a);i >= (n);i--)
#define clr(a,b) memset((a),(b),sizeof(a))
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define sz size()
#define print(X) cout << (X) << endl
static const int INF = 1e+9+7;
ll n,m,l;
string s,t;
int d[200010],dp[1010][1010];
double w[1000],v[1000];
double box[200010];

int mv[3] = {0,-1,1};

void dfs(int x,int y){
  if(dp[x][y] == -1)return;
  dp[x][y] = -1;
  rep(i,0,3){
    rep(j,0,3){
      if(mv[i] == 0 && mv[j] == 0)continue;
      if(dp[x+mv[i]][y+mv[j]] == 1)dfs(x + mv[i],y + mv[j]);
    }
  }
}

int main(){
  while(1){
    cin >> m >> n;
    if(!n && !m)break;
    clr(dp,-1);
    lep(i,1,n){
      lep(j,1,m){
        cin >> dp[i][j];
      }
    }
    ll ans = 0;
    lep(i,1,n){
      lep(j,1,m){
        if(dp[i][j] == 1){
          ans++;
          dfs(i,j);
        }
      }
    }
    print(ans);
  }
  return 0;
}
