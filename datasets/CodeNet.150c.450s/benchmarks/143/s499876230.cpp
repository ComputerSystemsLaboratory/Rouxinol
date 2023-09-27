#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;

int main(){
    ll N,Q;
    cin>>N;
    ll sum=0;
    map<ll,ll> m;
    for(ll i=0;i<N;++i){
        ll t;
        cin>>t;
        m[t]++;
        sum+=t;
    }
    cin>>Q;
    for(ll i=0;i<Q;++i){
        ll b,c;
        cin>>b>>c;
        ll t=c-b;
        sum+=t*m[b];
        m[c]+=m[b];m[b]=0;
        cout<<sum<<endl;
    }
}