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

int main(){
  while(1){
    cin >> n >> l;
    if(n == 0 && n == l)break;
    clr(d,0);
    m = 0;
    int mx = l;
    while(1){
      bool f = false;
      rep(i,0,n){
        if(!l){
          l += d[i];
          d[i] = 0;
          continue;
        }
        l--; d[i]++;
        if(d[i] == mx){
          m = i;
          f = true;
          break;
        }
      }
      if(f)break;
    }
    print(m);
  }
  return 0;
}
