#include "bits/stdc++.h"
using    namespace std;
typedef  long double ld;
#define  int long long
typedef  pair<int,int> pii;
#define  RAGE ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define  rep(i,n) for(i=0; i <n; i++)
#define  repv(i,k,n) for(int i=k; i<=n; i++)
#define  pb push_back
#define  mp make_pair
#define  F  first
#define  S  second
#define  sz(x)  (int)x.size()
#define  all(v) v.begin(),v.end()
#define  endl '\n'
#define  deb(x) c out<<#x<<" = "<<x<<endl
#define  gcd   __gcd
#define  inf   LLONG_MAX
#define  minf  LLONG_MIN 
#define  sp(n) fixed<<setprecision(n)
const int mod = (int)(1e9+7);
int power(int x,int n)
{   
    if(n==0)    return 1;
    if(n==1)    return x%mod;
    if(n%2==0)  {   int y = power(x,n/2)%mod;return (y*y)%mod;}
    if(n&1)     {   int y = power(x,n-1);return (x%mod * y%mod)%mod;}
    return 0;
}
int pct(int x)
{   return __builtin_popcountll(x);}
int  lcm(int a,int b){return a*b/gcd(a,b);}
bool is_power_2(int n){ return log2(n)==floor(log2(n));}
bool is_prime(int n){for(int i=2; i*i<=n; i++)if(n%i==0)return 0; return 1;}
void db()
{   
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
void timeit()
{  
    #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed: " <<sp(5)<< 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
    #endif
}
int     dx []    =  {-1 , 0 , 1 , 0 ,-1,-1, 1,  1};
int     dy []    =  { 0 , 1 , 0 ,-1 ,-1, 1, 1, -1};
char    dir[]    =  {'U','R','D','L'};
/* ---------------------- ar.cpp --------------------------------- */
const int maxn = 1e6+5;
void solve(int tc)
{
    //  cout<<"Case #"<<tc<<":\n";
    int n,i,j,k,m,q,l,r;
    cin>>n>>k;
    int ar[n+1];
    repv(i,1,n)
        cin>>ar[i];
    repv(i,k+1,n)
        (ar[i] > ar[i-k])?cout<<"Yes\n":cout<<"No\n";
}  
signed main()
{
    // ar.cpp 
    RAGE;
  //  db();    
    int t=1;
    //cin>>t;
    for(int i=1; i<=t; i++)
    {
        solve(i);
    }
 //   timeit();
    return 0;
}