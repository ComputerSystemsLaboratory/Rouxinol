#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i,n) for (ll i=1; i <= (ll)(n); i++)

int main(void){
    ll n,q,a;
    cin>>n;
    vector<ll> x(100001,0);
    rep(i,n){
        cin>>a;
        x[a]++;
    }
    cin>>q;
    vector<ll> b(q+1),c(q+1),s(q+1,0);
    rep(i,100000)s[0]+=i*x[i];
    ll A,B,C;
    rep(i,q){
        cin>>b[i]>>c[i];
        B=b[i];
        C=c[i];
        A=x[B];
        x[B]=0;
        x[C]+=A;
        s[i]=s[i-1]+A*(C-B);
    }
    rep(i,q)cout<<s[i]<<endl;
}