#include "bits/stdc++.h"
#pragma GCC optimize("O3,Ofast,no-stack-protector,unroll-loops,fast-math")

using namespace std;

using ll = long long;
#define all(x) begin(x), end(x)
const ll mod = 1000000007;
const ll INF = 1e18;
const ll MAX = 100005;

void solve(){
    int n;
    cin>>n;
    vector<ll> vec(MAX, 0);
    ll sm = 0;
    for(int i = 0; i < n; i++){
        int p;
        cin>>p;
        vec[p]++;
        sm += p;
    }
    int q;
    cin>>q;
    while(q--){
        int b, c;
        cin>>b>>c;
        sm -= vec[b]*b;
        sm += vec[b]*c;
        vec[c] += vec[b];
        vec[b] = 0;
        cout<<sm<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	ll t;
    t=1;
        // cin>>t;
        for (int i=1; i<=t; i++){
                //cout<<"Case #"<<i<<": ";
                solve();
         }
        return 0; 








}
