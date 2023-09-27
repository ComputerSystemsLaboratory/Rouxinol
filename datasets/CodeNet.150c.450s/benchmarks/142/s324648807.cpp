//om namah shivaay
//faith over fear
 
#include<bits/stdc++.h>
using namespace std;
 
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define ll long long 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i,n) for(i=0;i<n;i++)
#define forn(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define ford(i, n) for (ll i = (ll)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (ll i = (ll)(a); i <= (ll)(b); ++i)
#define fora(it,x) for(auto it:x)
#define PI 3.14159265
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
 
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef long double ld;
 
template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

ll a[200002];
int main(){
    ll n,k;
    cin>>n>>k;
    forn(i,n) cin>>a[i];
    for(ll i=k;i<n;i++){
        if(a[i]>a[i-k]) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}