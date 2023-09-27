#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    ll d ;cin>>d;
    vector<ll> c(26);rep(i,26)cin>>c[i];
    vector<vector<ll>> s(d,vector<ll>(26));
    vector<ll> x(365);//i回目のコンテストで選ばれた数字の保管
    vector<ll> bai(26); //何倍のcを追加するかのチェック
    ll ans = 0;

    rep(i,d){
        rep(j,26){
            cin>>s[i][j];
        }
    }
    vector<ll> t(d);rep(i,d)cin>>t[i];

    rep(i,d){
        ans+=s[i][t[i]-1];
        bai[t[i]-1]=i+1;


        rep(j,26){
            ans-=c[j]*(i+1-bai[j]);
        }
        cout<<ans<<endl;

    }

}