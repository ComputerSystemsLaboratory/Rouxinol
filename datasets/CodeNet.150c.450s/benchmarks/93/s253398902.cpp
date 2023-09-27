#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

ll partition(vector<pair<ll,char>> &a, ll p, ll r){
    ll x=a[r].first;
    ll i=p-1;
    for(ll j=p; j<r; j++){
        if(a[j].first<=x){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quicksort(vector<pair<ll,char>> &a, ll p, ll r){
    if(p<r){
        ll q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}

int main(){
    ll n; cin>>n;
    vector<pair<ll,char>> a(n), b(n);
    rep(i,n) cin>>a[i].second>>a[i].first;
    b=a;
    stable_sort(b.begin(), b.end(), [](const pair<ll,char> &x, const pair<ll,char> &y){return x.first<y.first;});
    quicksort(a, 0, n-1);
    bool ifstable=true;
    rep(i,n){
        if(a[i]!=b[i]) ifstable=false;
    }
    if(ifstable) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    rep(i,n) cout<<a[i].second<<' '<<a[i].first<<endl;
    return 0;
}
