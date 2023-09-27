#pragma GCC optimize("O3")
#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
using P=pair<int,int>;
template<class T> using V=vector<T>; 
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
const ll inf=(1e18);
const ll mod=1000000007;
ll gcd(ll a,ll b) {return b ? gcd(b,a%b):a;}
ll lcm(ll c,ll d){return c/gcd(c,d)*d;}
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
int dp[1005][1005];
int main(){
string s,t;
cin>>s>>t;
int n=s.size(),m=t.size();
for(int i=0;i<=n;i++)dp[i][0]=i;
for(int i=0;i<=m;i++)dp[0][i]=i;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        int cost=!(s[i-1]==t[j-1]);
        dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+cost});
    }
}
cout<<dp[n][m]<<endl;
}

