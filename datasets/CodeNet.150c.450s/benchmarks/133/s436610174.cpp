#include<bits/stdc++.h>
using namespace std;
#define REP(i,b,n) for(int i=b;i<(int)n;i++)
#define rep(i,n) REP(i,0,n)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int d;cin>>d;
    int c[26],last[26];
    rep(i,26)cin>>c[i];
    vector<vector<int>> s(d,vector<int>(26));
    rep(i,d)rep(j,26)cin>>s[i][j];
    vector<int> t(d);
    rep(i,d)cin>>t[i],t[i]--;
    rep(i,26)last[i]=-1;

    int S = 0,score = 0;

    rep(i,d){
      S += s[i][t[i]];
      last[t[i]] = i;
      rep(j,26)S -= c[j]*(i - last[j]);
      score += max((int)1e6 + S,0);
      cout<<S<<endl;
    }
    return 0;
}
