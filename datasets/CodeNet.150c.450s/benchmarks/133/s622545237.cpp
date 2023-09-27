#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

typedef long long ll;

#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
//定数
#define INF 1000000000 //10^9:極めて大きい値,∞
//略記
#define PB push_back //vectorヘの挿入
#define MP make_pair //pairのコンストラクタ
#define F first //pairの一つ目の要素
#define S second //pairの二つ目の要素

int main(){
    int d;
    cin>>d;
    vector<int> c(26);
    rep(i,26){ 
        cin>>c[i];
    }
    vector<vector<int>> s(d ,vector<int>(26));
    rep(i,d) rep(j,26) cin>>s[i][j];
    int t;
    vector<vector<int>> last(d ,vector<int>(26));
    int v=0;
    vector<int> kaisai_bi(26);
    int ans=18398+s[1][16];
    rep(j,26){
        if(j==16)continue;
        else if(j==0)ans-=c[j]*(2-1);
        else ans-=c[j]*(2-0);
    }
    rep(i,d) {
        cin>>t;
        t--;
        v+=s[i][t];
        kaisai_bi[t]=i+1;
        rep(j,26) last[i][j]=kaisai_bi[j];
        rep(j,26){ 
            v-=c[j]*(i+1-last[i][j]);
//            if(i==1)cout<<j<<" "<<c[j]*(i+1-last[i][j])<<endl;
            }
        cout<<v<<endl;
    }
    return 0;
}