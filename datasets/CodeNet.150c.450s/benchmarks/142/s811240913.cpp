//Author- Vaibhav Singh


#include<bits/stdc++.h>
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_multiset tree<long long , null_type,less_equal<long long >, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set tree<long long , null_type,less<long long >, rb_tree_tag,tree_order_statistics_node_update>
*/
using namespace std;
#define ll long long int
#define YES cout<<"YES"<<"\n";
#define NO cout<<"NO"<<"\n";
#define ld     long double 
#define yes cout<<"yes"<<"\n";
#define no cout<<"no"<<"\n";
#define No cout<<"No"<<"\n";
#define Yes cout<<"Yes"<<"\n";
#define f(i,a) for(i=0;i<a;i++)
#define fo(i,a) for(i=1;i<=a;i++)
#define fa(i,a) for(auto i:a)
#define r(i,a) for(auto i=a.rbegin();i!=a.rend();i++)
#define en cout<<"\n";
#define ull unsigned long long int
#define o(x) cout<<x<<"\n";
#define o1(x) cout<<x<<" ";
#define pb push_back
#define F first
#define in insert
#define mp make_pair
#define S second
#define pre(n) cout<<fixed<<setprecision(n);
#define      gcd(a,b)    __gcd(a,b)
#define bs            binary_search
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define test ll t;cin>>t;while(t-->0)
const ll Mod = 998244353;
#define mod 1000000007
#define pi 3.14159265358979323846
#define all(x) x.begin(),x.end()
#define re return 0;
// *#######################################################################################*

/*
bool isp(ll n)
{
    ll i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        
    }
}
  */
  
  ll powerm(ll x, unsigned ll y, ll p)  
{  
    ll res = 1;    
  
    x = x % p; 
   
    if (x == 0) return 0;
  
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % p;  
   
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}
  long long lcm(long long a, long long b){//最小公倍数を求める
   return a * b / gcd(a, b);
}

/*
ll po(ll z,ll z1)
{
    ll rer=0;
    rer=     ((z*(z-1))/2+(z1*(z1-1))/2);
    return rer;

}
*/
/*
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}
*/
/*
bool is_prime(ll n){
    for(ll i = 2;i*i<=n;i++){
        if(n%i == 0) return false;
    }
    return true;
}
*/
/*
ll inv(int a){
    return powerm(a,mod-2,mod);
}

ll const N=1e7;
ll fact[N], invfact[N];
 
void precompute(){
    fact[0] = 1;
    for(ll i=1;i<N;i++) fact[i] = (fact[i-1]*i)%mod;
    invfact[N-1] = inv(fact[N-1])%mod;
    for(ll i=N-2;i>=0;i--) invfact[i] = (invfact[i+1]*(i+1))%mod;
}
 
ll ncr(ll n, ll r){
    if(n<r) return 0;
    return (((fact[n]*invfact[r])%mod)*invfact[n-r])%mod;
}


ll C(ll x,ll y)
{
	ll ans=1;
	for(ll i=0;i<y;i++) ans=ans*(x-i)%mod;
	int sub=1;
	for(ll i=1;i<=y;i++) sub=sub*i%mod;
//	cout<<ans<<" "<<sub<<endl;
//	printf("%d %d %d\n",x,y,ans*inv(sub)%mod);
	return ans*inv(sub)%mod;
}

*/
//*88888*********5555555555555555******88888888$$$$$$$$$$******!!!!!!!!!!

       int main()
       {
           //プログラムの開始
    fast
   
    
   ll n,k;
   cin>>n>>k;
   ll a[n+5],i;
   fo(i,n)
   {
       cin>>a[i];
   }
  for(i=k+1;i<=n;i++)
  {
      if(a[i]>a[i-k])
      {
          Yes
      }
      else
      {
          No
      }
  }
  
  
  
       
          
re}