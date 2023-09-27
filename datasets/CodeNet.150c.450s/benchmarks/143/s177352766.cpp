#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
int main() {
    ll N;
    cin>>N;
    vector<ll>A(N);
    vector<ll>cnt(200000);
    ll ans=0;
    rep(i,N){
        cin>>A[i];
        ans+=A[i];
        cnt[A[i]]++;
    }
    ll Q;
    cin>>Q;
    vector<ll>B(Q);
    vector<ll>C(Q);
    rep(i,Q){
        cin>>B[i];
        cin>>C[i];
        ans+=cnt[B[i]]*(C[i]-B[i]);
        cnt[C[i]]+=cnt[B[i]];
        cnt[B[i]]=0;
        cout<<ans<<endl;
    }
}