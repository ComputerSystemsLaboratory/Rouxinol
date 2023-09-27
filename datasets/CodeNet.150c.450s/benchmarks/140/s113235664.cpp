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
#define fprint(NUM,X) cout << fixed << setprecision(NUM) << (X) << endl
#define fprints(NUM,X,Y) cout << fixed << setprecision(NUM) << (X) << " " << (Y) << endl
const ll INF = 1e+9+7;
ll n,m,l;
string s,t;
ll d[200010],dp[550][550];
double w[1000],v[1000];
double box[200010];

#define MAX 10000
struct Edge{int to,cost;};
vector<Edge> G[MAX];
int mincost[MAX];
bool used[MAX];

int prim(){
  int res = 0;
  rep(i,0,n){
    mincost[i] = INF;
    used[i] = false;
  }
  mincost[0] = 0;
  while(1){
    int v = -1;
    rep(i,0,n){
      if(!used[i] && (v == -1 || mincost[i] < mincost[v]))v = i;
    }
    if(v == -1)break;
    used[v] = true;
    res += mincost[v];
    rep(i,0,G[v].sz){
      mincost[G[v][i].to] = min(mincost[G[v][i].to],G[v][i].cost);
    }
  }
  return res;
}

int main(){
  int m;
  int p,q,r;
  cin >> n >> m;
  rep(i,0,m){
    int p,q,r;
    cin >> p >> q >> r;
    G[p].pb(Edge{q,r});
    G[q].pb(Edge{p,r});
  }
  cout << prim() << endl;
  return 0;
}

