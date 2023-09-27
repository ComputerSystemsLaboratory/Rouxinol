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

ll fib(int i){
  if(i == 1 || i == 0)return 1;
  if(d[i] != 0)return d[i];
  return d[i] = fib(i-1) + fib(i-2);
}

int main(){
  cin >> n;
  print(fib(n));
  return 0;
}
