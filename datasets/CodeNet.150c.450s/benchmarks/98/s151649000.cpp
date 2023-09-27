//Equal Total Scores
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define INF 100000

int main(){
  while(true){
    int n, m;
    cin>>n>>m;
    if(n==0&&m==0)break;
    int ssum=0, tsum=0;
    vector<int> s, t;
    rep(i,n){int tmp; cin>>tmp; s.push_back(tmp); ssum+=tmp;}
    rep(i,m){int tmp; cin>>tmp; t.push_back(tmp); tsum+=tmp;}
    int ans=INF, sc, tc;
    if((ssum+tsum)%2==0)
      rep(i,n)
        rep(j,m){
        if((ssum-tsum)/2==(s[i]-t[j]) && ans>(s[i]+t[j])){ans=(s[i]+t[j]); sc=s[i]; tc=t[j];}
      }
    if(ans==INF)cout<<"-1"<<endl;
    else cout<<sc<<" "<<tc<<endl;
  }
  return 0;
}