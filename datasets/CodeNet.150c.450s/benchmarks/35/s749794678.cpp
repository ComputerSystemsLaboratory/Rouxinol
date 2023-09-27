#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define drep(n,m) for(int i=0;i<n;i++)for(int j=0;j<m;j++)
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000009
#define pb push_back
#define mp make_pair
typedef long long ll;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

ll gcd(ll a,ll b){
    if(a<b){
        int t=a;a=b;b=t;
    }
    int c=a%b;
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}

ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

bool isPrime(int x){
    if(x==1)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    for(int i=3;i<=sqrt(x);i+=2){
        if(x%i==0)return false;
    }
    return true;
}

int main() {
    int n;
    while(cin>>n){
        if(n==0)break;
        vector<ll> v(n),rui(n);
        rep(i,0,n){
            cin>>v[i];
            if(i==0)rui[0]=v[0];
            else rui[i]=rui[i-1]+v[i];
        }
    
    ll ans=-100000000000000000;
    rep(i,0,n-1){
        rep(j,i+1,n){
           ans=max(ans,rui[j]-rui[i]);
        }
    }
    rep(i,0,n){
        ans=max(ans,rui[i]);
    }
    cout<<ans<<endl;
    }
    
  
    return 0;
}

