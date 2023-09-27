/* Tejus Tiwari */
#include <bits/stdc++.h>
using namespace std;
#define ff                               first
#define ss                               second
#define INF                              1e18L+1
#define pb                               push_back
#define mp                               make_pair
#define all(v)                           v.begin(),v.end()
#define f(i,a,b,c)                       for( i=a; i<b;i+=c)
#define rf(i,a,b,c)                      for( i=b-1;i>=a;i-=c)
#define fo(i,n)                          for( i=0; i < n ; i++)
#define rfo(i,n)                         for( i=n-1; i >=0 ; i--)
#define MEM(a,b)                         memset(a, (b), sizeof(a))
#define alldec(v)                        v.begin(),v.end(),greater<int>()
#define debug1(x)                        cout<<#x<<"="<<x<<endl;
#define debug2(x,y)                      cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl;
#define debug3(x,y,z)                    cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl;
#define debug4(x,y,z,w)                  cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<" "<<#w <<"="<<w<<endl;
#define debugarray(arr,n)                for(int i=0;i<n;i++) {cout<<"i="<<i<<" arr[i]="<<arr[i]<<"\n";}
#define debugmatrix( arr,n,m )           cout<<setw(5*m+8)<<"MATRIX\n\n"; for(int i=0;i<n;i++) { for(int j=0;j<m;j++){cout<<setw(10)<<arr[i][j];} cout<<"\n"; }
typedef long long int ll;                typedef vector<int> vi; typedef vector<ll> vll;   typedef pair<int,int>	pi;  typedef pair<ll,ll>	 pll;
const  ll M =  1000000007;               /* const ll M = 998244353; */     /* const double PI = 3.141592653589793; */  vll primefactors, factors, fact;
bool isPowerTwo(ll x)                   { return (x && !(x & (x - 1))); }
ll   modadd(ll a,ll b)                  { return((a%M)+(b%M)+M)%M;} ll   modsub(ll a,ll b){ return((a%M)-(b%M)+M)%M;}   ll modmul(ll a,ll b){ return((a%M)*(b%M))%M;}
void generateFactorial(ll n)            { fact[0] = 1; for(ll i = 1; i <= n; i++)	fact[i] = (i* 1ll * fact[i - 1]) % M; }
bool isPrime(ll n)                      { if(n<2) return false; for(ll i=2;i*i<=n;i++) if(n%i==0) return false; return true; } //O(sqrt(n))
ll   power(ll a, ll b)                  {	ll res=1; while(b) {	if(b&1) res=(res*a)%M; a=(a*a)%M; 	b>>=1;	}	return res; }
ll   modi (ll a)                        { ll m=M,s=1,p=0;  while(a>1)  {  ll q=a/m,t=m;  m=a%m; a=t; t=p; p=s-q*p; s=t;  } return s>=0 ? s :s+M; }
void generatePrimeFactors(ll n)         { primefactors.clear(); for(ll i=2;i*i<=n;i++) { if(n%i==0) { primefactors.pb(i); while(n%i==0)  n=n/i; } } if(n!=1)   primefactors.pb(n); }
ll   ncr(ll n, ll r)                    { if(r==0)return 1;  fact[0]=1; for(int i=1 ; i<=n; i++) fact[i] = fact[i-1]*i%M;   return (fact[n]* modi(fact[r]) % M *  modi(fact[n-r]) % M) % M; }
void generateFactors(ll n)              { factors.clear(); for(ll i=2;i*i<=n;i++){ if(n%i==0) { factors.pb(i); if(n/i!=i)factors.pb(n/i); }} factors.pb(1); factors.pb(n); sort(all(factors)); }

//*****************************************************************************************************************************************************************

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0);
  ll tc=1;
//   cin>>tc;
  while(tc--){
    ll i,j,n,m; cin>>n;
    ll sum=0,ans=0,flag=1;
    vll a(n),cnt(100005,0);
    fo(i,n){
      cin>>a[i];
      cnt[a[i]]++;
      sum+=a[i];
    }
    int q; cin>>q;
    fo(i,q){
        ll b,c; cin>>b>>c;
        sum += cnt[b]*(c-b);
        cnt[c]+=cnt[b];
        cnt[b]=0;
        cout<<sum<<"\n";
    }
  }
return 0;
}

//*****************************************************************************************************************************************************************
