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
char field[200][200];

int main(){
  while(1){
    cin >> n >> m >> l;
    if(n == 0 && n == m && n == l)break;
    vp vec;
    ll ans = 0;
    rep(i,1,l){
      rep(j,1,l){
        if((i * (100+n))/100 + (j*(100+n))/100 == l){
          vec.pb(P(i,j));
        }
      }
    }
    rep(i,0,vec.sz){
      int x = vec[i].first;
      int y = vec[i].second;
      if((x * (100 + m))/100 + (y * (100 + m))/100 > ans)ans = (x * (100 + m))/100 + (y * (100 + m))/100;
    }
    print(ans);
  }
  return 0;
}
