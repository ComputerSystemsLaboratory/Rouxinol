#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
vector<ll> prime_factorize(ll x){
    vector<ll> res;
    ll y=x;

    for(ll i=2; i*i<=x; i++){
        while(y%i==0){
            y/=i;
            res.push_back(i);
        }
    }
    if(y>1) res.push_back(y);

    return res;
}


int main(){
    ll n; cin>>n;
    vector<ll> res=prime_factorize(n);
    cout<<n<<':';
    for(ll i: res) cout<<' '<<i;
    cout<<endl;
    return 0;
}
