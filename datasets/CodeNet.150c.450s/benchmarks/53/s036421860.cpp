#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<iostream>
#include<functional>
#include <cassert>
# define ll int64_t
# define rep(i,n) for(ll i=0;i<n;i++)
# define rrep(i,n) for(ll i=1;i<=n;i++)
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size())
# define pb push_back
# define mod 1000000007
# define PI 3.141592653589793
# define vec vector
#define dump(x) cerr<<#x<<"="<<x<<endl
using namespace std;

bool compare_by_b(pair<string,ll> a,pair<string,ll> b){
    if(a.second != b.second) return a.second<b.second;
    else return a.first<b.first;
}

bool my_compare(pair<string,ll> a,pair<string,ll> b){
    
    if(a.first != b.first) return a.first<b.first;
    if(a.second != b.second) return a.second>b.second;
    else return true;
}

ll factorial(ll n){
    ll x=1;
    rrep(i,n) (x*=i)%=mod;
    return x;
}

ll gcd(ll a,ll b)
{
   if (a%b == 0) return(b);
   else return(gcd(b,a%b));
}

ll lcm(ll a,ll b)
{
   return a/gcd(a,b)*b;
}



int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll n;
    cin>>n;
    cout<<n<<":"<<" ";
    ll a=2;
    while(n>=a*a){
        if(n%a==0){
            cout<<a<<" ";
            n /= a;
        }else a++;
    }
    cout<<n<<endl;
    return 0;
}

