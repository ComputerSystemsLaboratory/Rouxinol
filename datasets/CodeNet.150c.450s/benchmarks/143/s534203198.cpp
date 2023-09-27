#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define FORC(i,a,b,c) for(ll i=(a);i<(b);i+=(c))
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second
#define dd long double
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    map<ll,ll> m;
    ll sum=0;
    REP(i,n){
        ll temp;
        cin>>temp;
        sum+=temp;
        m[temp]++;
    }
    ll q;
    cin>>q;
    while(q--){
        ll b,c;
        cin>>b>>c;
        ll x=m[b];
        m[b]=0;
        sum-=x*b;
        sum+=x*c;
        m[c]+=x;
        cout<<sum<<endl;
    }
}
