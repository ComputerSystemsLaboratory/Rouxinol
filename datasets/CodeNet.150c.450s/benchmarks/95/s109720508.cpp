#pragma GCC optimize("O3")
#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
typedef  unsigned long long int ull;
typedef pair<ll,ll> P;
template<class T> using V=vector<T>; 
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
const ll inf=(1e18);
//const ll mod=998244353;
const ll mod=1000000007;
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
ll gcd(ll a,ll b) {return b ? gcd(b,a%b):a;}
ll lcm(ll c,ll d){return c/gcd(c,d)*d;}
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
int main(){
int n;
while(1){
cin>>n;
if(n==0)return 0;
V<string> s(n);
for(int i=0;i<n;i++)cin>>s[i];
int l=0,r=0,u=0,d=1,ans=0;
for(int i=0;i<n;i++){
    if(s[i]=="lu")l=1;
    if(s[i]=="ru")r=1;
    if(s[i]=="ld")l=0;
    if(s[i]=="rd")r=0;
    if(u){
        if(l==0&&r==0){
            ans++;
        u=0;d=1;
        }
    }
    if(d){
         if(l==1&&r==1){
            ans++;
        u=1;d=0;
        }
    }
}
cout<<ans<<endl;
}
}
