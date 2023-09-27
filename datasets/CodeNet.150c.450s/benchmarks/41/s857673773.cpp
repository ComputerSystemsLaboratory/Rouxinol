#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>
#include <utility>
#include <tuple>
#include <functional>
#include <bitset>
#include <cassert>
#include <complex>
#include <stdio.h>
#include <time.h>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
# define ll int64_t
# define str string
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

#define INF 2000000000
#define MAX_V 10

ll dp[110][110];


void warshall_floyd(ll n) {
    for (ll k = 0; k < n; k++){       // 経由する頂点
    for (ll i = 0; i < n; i++) {    // 始点
        if(dp[i][k]==INF) continue;
      for (ll j = 0; j < n; j++) {  // 終点
        if(dp[k][j]==INF) continue;
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }
}

bool compare_by_b(pair<string,ll> a,pair<string,ll> b){
    if(a.second != b.second) return a.second<b.second;
    else return a.first<b.first;
}

bool my_compare(pair<string,ll> a,pair<string,ll> b){
    if(a.first != b.first) return a.first<b.first;
    if(a.second != b.second) return a.second>b.second;
    else return true;
}

ll modpow(ll a,ll n,ll mod1) {
    ll res=1;
    while(n>0){
        if(n&1) res=res*a%mod1;
        a = a*a%mod1;
        n >>= 1;
    }
    return res;
}

ll factorial(ll n){
    ll x=1;
    rrep(i,n) (x*=i)%=mod;
    return x;
}

ll gcd(ll a,ll b){
   if (a%b == 0) return(b);
   else return(gcd(b,a%b));
}

ll lcm(ll a,ll b){
   return a/gcd(a,b)*b;
}



int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    rep(i,110){
        rep(j,110){
            if(i==j) dp[i][j]=0;
            else dp[i][j]=INF;
        }
    }
    
    ll v,e;
    cin>>v>>e;
    rep(i,e){
        ll s,t,d;
        cin>>s>>t>>d;
        dp[s][t]=d;
    }
    warshall_floyd(v);
    rep(i,v) if(dp[i][i]<0){
        cout<<"NEGATIVE CYCLE"<<endl;
        return 0;
    }
    rep(i,v){
        rep(j,v){
            if(dp[i][j]==INF) cout<<"INF";
            else cout<<dp[i][j];
            if(j!=v-1) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
