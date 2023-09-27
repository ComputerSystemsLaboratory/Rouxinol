#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define pii pair<int, int>
#define pll pair<long long,long long>
#define vl vector<long long>
#define vll vector<pll>
#define vi vector<int>
#define vii vector<pii>
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define tcase int tt; cin>>tt; while(tt--)
#define tcase2 int tt; cin>>tt; for(int qq=1;qq<=tt;qq++)
using namespace std;
typedef long long int ll;
typedef  unsigned long long int ull;
typedef long double ld;
const int MAXN = 1000002;
const int MOD2 = 998244353;
const int MOD = 1000000007; 
const int INF = 1e8;
const ld EPS = 1e-7;
// Extra
#define forn(i, n) for(int i = 0; i < (int)n; i++)
#define forne(i, a, b) for(int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()
#define trav(a, x) for(auto& a : x)
#define fill(x,y) memset(x,y,sizeof(x))
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
ll mul(ll x, ll y)
{
    return (x * 1ll * y) % MOD;
}

ll fastpow(ll x, ll y)
{
    ll z = 1;
    while(y)
    {
        if(y & 1) z = mul(z, x);
        x = mul(x, x);
        y >>= 1;
    }
    return z;
}
/*struct Comp {
  bool operator()(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    if (a.ff.ff == b.ff.ff) {
      return a.ff.ss < b.ff.ss;
    }
    return a.ff.ff <b.ff.ff;
  }
};*/
inline int ask(int x, int y){
	cout<<"?"<<" "<<x<<" "<<y<<"\n"<<flush; 
	int ret; cin>>ret; 
	if(ret == -1)exit(0); 
	return ret; 
}

int main(int argc, char** argv)
{
  sws ;  
  cout<<setprecision(20); 
 // tcase
  {
  ll s=0 ;
  ll n ;
  cin>>n ;
  ll a[n] ;
  map<ll,ll>mp ;
  forn(i,n)
  {
  cin>>a[i] ;
  mp[a[i]]++ ;
  s+=a[i];
  }
  ll q ;
  cin>>q ;
  while(q--)
  {
  	ll b,c ;
  	cin>>b>>c ;
  	ll temp=mp[b] ;
  	s+=temp*(c-b) ;
  	mp[b]=0 ;
  	mp[c]+=temp ;
  //	cout<<mp[c]<<" "<<c<<"\n";
  	cout<<s<<"\n";
  }
  
  
  }
  
  return 0 ;
}