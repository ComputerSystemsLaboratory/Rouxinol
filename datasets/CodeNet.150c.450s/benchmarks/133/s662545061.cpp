#include <bits/stdc++.h>

using namespace std;

#ifndef aa
#define trace(...)
#define endl '\n'
#endif
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define fi first
#define se second
#define int long long
typedef long long ll;
typedef long double ld;
#define double long double
#define pii pair<int,int>
#define pdd pair<double,double>
#define pll pair<ll,ll>
#define sz(x) ((long long)x.size())
#define fr(a,b,c) for(int a=b; a<=c; a++)
#define frev(a,b,c) for(int a=c; a>=b; a--)
#define rep(a,b,c) for(int a=b; a<c; a++)
#define trav(a,x) for(auto &a:x)
#define all(con) con.begin(),con.end()
#define deb(x) cout << x << endl
#define done(x) {cout << x << endl;return;}
const ll infl = 0x3f3f3f3f3f3f3f3fLL;
const int infi = 0x3f3f3f3f;
mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());
//const int mod = 998244353;
const int mod = 1e9 + 7;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef map<int, int> mii;
typedef set<int> si;
typedef set<pair<int,int>> spii;
typedef queue<int> qi;


const int N = 405;

int d;
vi c(27);
vvi a(N,vi(27));

void f(vi &v){
  int res = 0;
  vi last(27,-1);
  rep(i,0,d){
    last[v[i]]=i;
    fr(j,1,26)
      res-=(i-last[j])*c[j];
    res+=a[i][v[i]];
    cout<<res<<endl;
  }
}


void solve() {

  
  cin>>d;
  fr(i,1,26)
    cin>>c[i];
  rep(i,0,d)
    fr(j,1,26)
      cin>>a[i][j];
  
  vi v(d);
  rep(i,0,d)
    cin>>v[i];
  f(v);
}


signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << fixed << setprecision(15);
    int t = 1;
   //cin >> t;

    while (t--)
        solve();
#ifdef aa
    cout << endl << endl << endl << endl << "Time elapsed: " << (double)(clock() - clk) / CLOCKS_PER_SEC << endl;
#endif
    return 0;
}







int powm(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1)
            res = (res*a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int divide(int a, int b) {
    return (a % mod) * powm(b, mod - 2) % mod;
}

int norm(int a) {
    while (a >= mod) a -= mod;
    while (a < 0) a += mod;
    return a;
}


int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
