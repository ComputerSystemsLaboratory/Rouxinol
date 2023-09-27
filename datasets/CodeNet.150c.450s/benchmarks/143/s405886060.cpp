#include<bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define pii pair<ll,ll>
#define debug(a) cout<<a<<'\n'
#define maxn 200009 /// I wanna be the wind
#define MOD 1000000007
#define F first
#define S second
#define rep(i, a, b) for(ll i = a; i < (b); ++i)
#define per(i, b, a) for(ll i = b-1; i>=a ; i--)
#define trav(a, x) for(auto& a : x)
#define allin(a , x) for(auto a : x)
#define all(x) begin(x), end(x)
#define sz(x) (ll)(x).size()
using namespace std;
const ll INF = 1e17 + 9;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll vet[n+2];
    map<int,int> cont;
    ll soma=0;
    rep(i,0,n){
        cin>>vet[i];
        soma+=vet[i];
        cont[vet[i]]++;
    }
    ll q;
    cin>>q;
    while(q--){
        ll b,c;
        cin>>b>>c;
        ll qt = cont[b];
        cont[b]-=qt;
        soma += qt*(c-b);
        cont[c]+=qt;
        cout<<soma<<"\n";
    }
    return 0;  
}   