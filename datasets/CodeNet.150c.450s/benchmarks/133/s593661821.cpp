#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll=long long;

int main(){
    int d;
    cin>>d;
    vector<int>c(26),t(d),last(26,0);
    vector<vector<int>>s(d,vector<int>(26));
    rep(i,26)cin>>c[i];
    rep(i,d)rep(j,26)cin>>s[i][j];
    rep(i,d){
        cin>>t[i];
        t[i]--;
    }
    ll ans=0;
    rep(i,d){
        ans+=s[i][t[i]];
        last[t[i]]=i+1;
        rep(j,26)ans-=c[j]*((i+1)-last[j]);
        cout<<ans<<endl;
    }
}