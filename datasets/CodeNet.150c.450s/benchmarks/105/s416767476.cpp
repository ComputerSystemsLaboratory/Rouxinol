#pragma GCC optimize("O3")
#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
using P=pair<ll,ll>;
template<class T> using V=vector<T>; 
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
const ll inf=(1e18);
const ll mod=1000000007;
const vector<int> dy={-1,0,1,0},dx={0,-1,0,1};
ll gcd(ll a,ll b) {return b ? gcd(b,a%b):a;}
ll lcm(ll c,ll d){return c/gcd(c,d)*d;}
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(4);}} __init;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
void solve(){
    ll n;
    cin>>n;
    V<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    reverse(all(a));
    V<ll> bases;
    string s;
    cin>>s;
    reverse(all(s));
    for(int i=0;i<n;i++){
        for(ll base:bases){
            chmin(a[i],a[i]^base);
        }
        if(a[i]){
            if(s[i]=='0'){
                bases.push_back(a[i]);
            }else{
                cout<<1<<"\n";
                return;
            }
        }
    }
    cout<<0<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
