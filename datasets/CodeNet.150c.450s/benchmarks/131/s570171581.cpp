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
#include <complex>
#include <cassert>
#include <exception>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<P> vp;
#define rep(i,a,n) for(ll i = (a);i < (n);i++)
#define per(i,a,n) for(ll i = (a);i > (n);i--)
#define lep(i,a,n) for(ll i = (a);i <= (n);i++)
#define pel(i,a,n) for(ll i = (a);i >= (n);i--)
#define clr(a,b) memset((a),(b),sizeof(a))
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define sz size()
#define endl "\n"
#define print(X) cout << (X) << "\n"
// #define input(X) getline(cin,X)
static const int INF = 1e+9+7;
static const ll INFL = 1e+18+7;
ll n,m,l;
string s,t;
ll d[200010],dp[300][300];
char field[200][200];

int get(int num){
  vi big,small;
  int a,b;
  a = b = 0;

  while(num > 0){
    big.pb(num % 10);
    num /= 10;
  }
  rep(i,big.sz,m)big.pb(0);
  small = big;
  sort(all(big));
  sort(all(small),greater<int>());

  rep(i,0,big.sz){
    a += big[i] * pow(10,i);
    b += small[i] * pow(10,i);
  }

  return a-b;
}

void solve(){
  vi vec;
  int now = 0;
  int ans = -1;
  vec.pb(n);
  while(1){
    now = get(vec[vec.sz-1]);
    rep(i,0,vec.sz){
      if(vec[i] == now){
        cout << i << " " << now << " " <<  vec.sz-i << endl;
        return;
      }
    }
    vec.pb(now);
  }
}

int main(){
  while(cin >> n >> m,(n+m) != 0){
    solve();
  }
  return 0;
}
