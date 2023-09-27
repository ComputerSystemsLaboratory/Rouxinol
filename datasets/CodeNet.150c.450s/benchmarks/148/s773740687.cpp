#include <bits/stdc++.h>
#define rep(i,a,b) for(ll i=ll(a);i<ll(b);i++)
#define irep(i,a,b) for(ll i=ll(a);i>=ll(b);i--)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define pb push_back
#define mp make_pair
#define F .first
#define S .second 
#define pll pair<ll,ll>
using ll=long long;
using ld=long double;
const ll INF = 1LL<<60;
const ll mod=1e9+7;
using namespace std;
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }

string s;
map<string,ll> p;
int main(){
    ll n;
    cin>>n;
    rep(i,0,n){cin>>s;p[s]++;}
    cout<<"AC x "<<p["AC"]<<endl;
    cout<<"WA x "<<p["WA"]<<endl;
    cout<<"TLE x "<<p["TLE"]<<endl;
    cout<<"RE x "<<p["RE"]<<endl;
}


