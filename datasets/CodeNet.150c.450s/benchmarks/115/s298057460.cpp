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
ll d[200010],dp[1010][1010];
double w[1000],v[1000];
double box[200010];

ll func(){
  rep(i,0,s.sz)dp[i][0] = 0;
  rep(i,0,t.sz)dp[0][i] = 0;
  rep(i,0,s.sz){
    rep(j,0,t.sz){
      if(s[i] == t[j]){
        dp[i+1][j+1] = dp[i][j] + 1;
      }else{
        dp[i+1][j+1] = max(dp[i+1][j] , dp[i][j+1]);
      }
    }
  }
  return dp[s.sz][t.sz];
}

int main(){
  cin >> n;
  rep(i,0,n){
    cin >> s >> t;
    print(func());
  }
  return 0;
}
