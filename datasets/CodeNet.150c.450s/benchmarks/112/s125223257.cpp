#include <bits/stdc++.h>
#define SIZE 300005
#define MOD 1000000007LL
#define EPS 1e-10
#define INF 1 << 30
#define LLINF LLONG_MAX/3
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define DOWN(i,b,a) for(int i=b;i>=a;i--)
#define SET(a,c) memset(a,c,sizeof a)
#define BIT(i,j) ((i)>>(j))&1
#define ALL(o) (o).begin(), (o).end()
#define ERASE(o) (o).erase(unique((o).begin(),(o).end()), (o).end())
#define SQ(x) ((x)*(x))
using namespace std;
typedef long long ll;
typedef pair<ll,ll> Pll;
typedef pair<int, int> Pii;
typedef pair<double, double> Pdd;
typedef complex<double> dcomplex;
template<typename T> inline void priv(vector<T>a){REP(i,a.size()){cerr<<a[i]<<((i==a.size()-1)?"\n":" ");}}
ll gcd(ll a,ll b){int c=max(a,b);int d=min(a,b);return c==0||d==0?c:gcd(c%d,d);}
ll lcm(ll a,ll b){return a==0||b==0?0:a*b/gcd(a,b);}
ll fact(ll a){ll b=1;FOR(i,1,a)b*=i;return b;}
ll power(ll x,ll n){ll a=1;REP(i,n)a*=x;return a;}

int main()
{
  int n,m;
  string s,t;
  string ans;
  while(cin >> n)
  {
    if(n == 0) break;
    map<string,string> d;
    REP(i,n)
    {
      cin >> s >> t;
      d[s] = t;
    }
    cin >> m;
    ans = "";
    REP(i,m)
    {
      cin >> s;
      if(d.find(s) == d.end())
        ans += s;
      else
        ans += d[s];
    }
    cout << ans << endl;
  }
  return 0;
}