#include<bits/stdc++.h>
#define pi acos(-1)
#define ll long long
#define pii pair<ll,ll>
#define debug(a) cout<<a<<'\n'
#define maxn 100009 /// I wanna be the wind
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
    ll ac=0,wa=0,tle=0,re=0;
    rep(i,0,n){
        string s;
        cin>>s;
        if(s=="AC")ac++;
        else if(s=="WA")wa++;
        else if(s=="TLE")tle++;
        else re++;
    }
    cout<<"AC x "<<ac<<"\n";
    cout<<"WA x "<<wa<<"\n";
    cout<<"TLE x "<<tle<<"\n";
    cout<<"RE x "<<re<<"\n";
    return 0;  
}