#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

ll partition(vector<ll> &a, ll p, ll r){
    ll x=a[r];
    ll i=p-1;
    for(ll j=p; j<r; j++){
        if(a[j]<=x){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

int main(){
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    ll x=partition(a, 0, n-1);
    rep(i,n){
        if(i==x) cout<<'['<<a[i]<<']';
        else cout<<a[i];

        if(i<n-1) cout<<' ';
    }
    cout<<endl;
    return 0;
}
