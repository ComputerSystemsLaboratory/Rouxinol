// Hail god Yato
 
#include <bits/stdc++.h> 
using namespace std;
 
#define hs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const ll mod = 1000000007;
const ll INF = 1e18;
const ll MAX = 100005;
//
//
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
        hs;
        ll t;
        t=1;
        // cin>>t;
        for (int i=1; i<=t; i++){
                //cout<<"Case #"<<i<<": ";
                solve();
         }
        return 0; 
}