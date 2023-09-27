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
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define sz size()
#define print(X) cout << (X) << "\n"
static const int INF = 1e+9+7;
ll n,m,l;
string s,t;
ll d[200010],dp[300][300];
char field[200][200];

void big(){
  if(l > 20){
    l = 1;
    m++;
  }
}

void small(){
  if(l > 19){
    l = 1;
    m++;
  }
}

void check(){
  if(m > 10){
    m = 1;
    n++;
  }
}

int main(){
  int p;
  cin >> p;
  while(p--){
    ll ans = 0;
    cin >> n >> m >> l;
    while(1){
      if(n == 1000 && m == 1 && l == 1)break;
      // cout << n << " " << m << " " << l << endl;
      ans++;
      l++;
      if(n % 3 == 0)big();
      else{
        if(m % 2)big();
        else small();
      }
      check();
    }
    print(ans);
  }
  return 0;
}
