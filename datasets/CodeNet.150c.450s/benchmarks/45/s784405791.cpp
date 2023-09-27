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
static const int INF = 1e+9+7;
ll n,m,l;
string s,t;
ll d[200010],dp[1010][1010];
double w[1000],v[1000];
double box[200010];

long long mod_pow(unsigned long long x,unsigned long long y,unsigned long long mod){
  unsigned long long ans = 1;
  while(y > 0){
    if(y & 1)ans = ans * x % mod;
    x = x * x  % mod;
    y >>= 1;
  }
  return ans;
}

int main(){
  cin >> n >> m;
  cout << mod_pow(n,m,INF) << endl;
  return 0;
}
