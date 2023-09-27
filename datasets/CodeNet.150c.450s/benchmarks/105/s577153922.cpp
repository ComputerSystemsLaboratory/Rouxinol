#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define dbg(x...) do{cout << "\033[32;1m" << #x << "->" ; err(x);} while(0)
void err(){cout << "\033[39;0m" << endl;}
template<template<typename...> class T,typename t,typename... A>
void err(T<t> a,A... x){for (auto v:a) cout << v << ' '; err(x...);}
template<typename T,typename... A>
void err(T a,A... x){cout << a << ' '; err(x...);}
#else
#define dbg(...)
#endif
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
template<class T> using vc=vector<T>;
template<class T> using vvc=vc<vc<T>>;
template<class T> void mkuni(vector<T>&v)
{
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
}
template<class T>
void print(T x,int suc=1)
{
    cout<<x;
    if(suc==1) cout<<'\n';
    else cout<<' ';
}
template<class T>
void print(const vector<T>&v,int suc=1)
{
    for(int i=0;i<v.size();i++)
        print(v[i],i==(int)(v.size())-1?suc:2);
}
const int INF=0x3f3f3f3f;
//const int maxn=5e3+7;
const int mod=1e9+7;
const int maxn = 200 + 10;
ll a[maxn];

const int L = 63;
ll d[L];
bool add(ll x){
    for(int i = L - 1; i >= 0; i--) if(x & 1ll << i){
        if(d[i] == -1){d[i] = x; return true;}
        x ^= d[i];
    }
    return false;
}

int main(){
    int t; cin >> t; while(t--){
        memset(d, -1, sizeof d);
        
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        char s[maxn]; cin >> s;
        int flag = 0;
        for(int i = n - 1; i >= 0; i--){
            if(add(a[i]) && s[i] == '1'){
                flag = 1;
                break;
            }
        }
        cout << flag << endl;
    }
    return 0;
}