#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vll vector<ll>
#define vvll vector<vll>
#define mll map<ll,ll>
#define f(i,m,n) for(i=m;i<n;i++)
#define ee endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define take(v,n) for(i=0;i<n;i++) cin>>v[i];
#define NO() cout<<"NO"<<endl
#define YES() cout<<"YES"<<endl
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sot(v) sort(v.begin(),v.end());
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

ll powe(ll x, ll y){
    ll res = 1;
    while (y > 0){
        if (y & 1) res = res*x;
        y = y>>1;
        x = x*x;
    }
    return res;
}

void solve()
{
    ll i,j,k=0,n,l;
    cin>>n;
    vll v(n);
    mll m;
    ll sum=0;
    for(i=0;i<n;i++) 
    {
        cin>>v[i];
        sum+=v[i];
        m[v[i]]++;
    }
    ll q;
    cin>>q;
    ll x,y;
    while(q--)
    {
        cin>>x>>y;
        k=m[x];
        m[x]=0;
        sum-=k*x;
        m[y]+=k;
        sum+=k*y;
        cout<<sum<<ee;
    }
}

int main() {
    fast;
    ll i,j,l,k,t,n;
    t=1;
    while(t--)
    solve();
}
