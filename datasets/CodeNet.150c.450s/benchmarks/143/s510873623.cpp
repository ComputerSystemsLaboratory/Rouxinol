
// Problem : D - Replacing
// Contest : AtCoder - AtCoder Beginner Contest 171
// URL : https://atcoder.jp/contests/abc171/tasks/abc171_d
// Memory Limit : 1024 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;

typedef long long   ll;
const ll mod = 1e9 + 7;

#define speedup_IO      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define forn(i,a,n)     for(ll i = (a); i < (n); i++)
#define ford(i,n,a)     for(ll i = (n); i >= (a); i--)
#define pb              push_back
#define lb              lower_bound   // first element >= val(itr) 
#define ub              upper_bound   // first element >  val(itr)
#define vll             vector<ll>
#define pll             pair<ll,ll>
#define all(a)          (a).begin(),(a).end()
#define reset(a,x)      memset(a,x,sizeof(a)) //x can be 0 or -1

ll mypow(ll base, ll exp) {ll res = 1; while (exp) {if (exp & 1) res = (res * base) % mod; exp >>= 1, base = (base * base) % mod;} return res;}
ll gcd(ll a, ll b)  { return b ? gcd(b, a % b) : a; }
ll mult(ll a, ll b) { if (a < 0) {a += mod;} if (b < 0) {b += mod;} return ((a % mod) * (b % mod)) % mod;   }
ll add(ll a, ll b)  { if (a < 0) {a += mod;} if (b < 0) {b += mod;} return (a % mod + b % mod) % mod;       }
ll sub(ll a, ll b)  { if (a < 0) {a += mod;} if (b < 0) {b += mod;} return (a % mod + mod - b % mod) % mod; }

#ifdef LOCAL_TEST
  #include"C:\\Users\\kaush\\OneDrive\\Desktop\\debug.h"
#endif

const ll inf = 1e18;
const int nax = 2e5 + 5;

void SolveTestCase()
{
  ll n,q;
  cin>>n;
  ll a[n];
  map<ll,ll>cnt;
  ll sum = 0;
  forn(i,0,n){
    cin>>a[i];
    cnt[a[i]]++;
    sum += a[i];
  }
  
  cin>>q;
  ll b,c;
  forn(i,0,q){
    cin>>b>>c;
    
    sum += (c-b)*cnt[b];
    cout<<sum<<endl;

    cnt[c] += cnt[b];
    cnt[b] = 0;
  }
}

int main()
{
  speedup_IO;

  int t = 1;
  //cin >> t;
  forn(i, 0, t)
  {
    SolveTestCase();
  }

  return 0;
}
