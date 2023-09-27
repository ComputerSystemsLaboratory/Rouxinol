#include <bits/stdc++.h>

typedef long long ll;
#define ALL(l)  (l).begin(),(l).end()
#define rep(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define pb push_back
using namespace std;

//const ll mod =  1000000007;
//const ll maxn = 1000000000;

//---------------------------------------------------------------------------------------------------
using vi = vector<int>; // intの1次元の型に vi という別名をつける
using vll = vector<ll>; // intの1次元の型に vi という別名をつける
using vvll = vector<vll>; // intの2次元の型に vvi という別名をつける
using vs = vector<string>; // stringの1次元の型に vs という別名をつける
using pll = pair<ll, ll>; // これ以降 pii という型名はpair<ll, ll> と同じ意味で使える
//---------------------------------------------------------------------------------------------------

int main() {
    ll n,ans=2;
    cin>>n;
    cout<<n<<": ";
    vll a;
    while(1){
        if(n%ans==0){
            //cout<<ans<<" ";
            a.pb(ans);
            n/=ans;
        }else{
            ans++;
        }
        if(ans>100000)break;
    }
    if(n>1)a.pb(n);
    rep(i,a.size()-1){
        cout<<a.at(i)<<" ";
    }
    cout<<a.at(a.size()-1)<<endl;
}
