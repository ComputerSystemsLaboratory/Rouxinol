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

ll bekijo(ll n,ll m){
    if(m==1)return n;
    
    if(m%2==0)return (bekijo(n,m/2)) % 1000000007* (bekijo(n,m/2)) % 1000000007;
    else return  bekijo(n,m/2) % 1000000007* bekijo(n,m/2) % 1000000007*n % 1000000007;
}

int main() {
    ll n,m;
    cin>>n>>m;
    cout<<bekijo(n,m)<<endl;
}
