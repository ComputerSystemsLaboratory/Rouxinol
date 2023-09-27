#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main() {
  long d;
  cin>>d;
  vector<long>c(26);
  rep(i,26){
    cin>>c.at(i);
  }
  vector<vector<long>>s(d,vector<long>(26));
  rep(i,d){
    rep(j,26){
      cin>>s[i][j];
    }
  }
  vector<long>t(d);
  rep(i,d){
    cin>>t[i];
    t[i]--;
  }
  vector<long>ch(26);
  long tot=0;
  rep(i,d){
    
    
    ch[t[i]]=i+1;
    long mi=0;
    rep(j,26){
      if(j!=t[i]){
        mi+=c[j]*(i+1-ch[j]);
      }
    }
    tot+=s[i][t[i]]-mi;
    cout<<tot<<endl;
  }
  
}



