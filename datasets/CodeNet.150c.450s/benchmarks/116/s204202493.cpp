#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define INF 100000000
#define rep(i,s,n) for (int i = (int)(s); i < (int)(n); i++)
#define mp make_pair
ll mod = 10e9+7;
ll mod2 = 998244353;

int main(){
    vector<ll> ans;
    while (true){
        int n,k;cin>>n>>k;
        if (n==0 && k==0){
            break;
        }
        vector<ll> a(n);
        rep(i,0,n) cin>>a[i];
        vector<ll> b(n+1,0);
        rep(i,0,n) b[i+1] = b[i] + a[i];
        ll num = 0;
        rep(i,0,n-k){
            num = max(num,b[i+k]-b[i]);
        }
        ans.push_back(num);
    }
    for(auto x:ans){
        cout<<x<<endl;
    }
}
