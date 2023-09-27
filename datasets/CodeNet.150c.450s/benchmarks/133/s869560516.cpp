#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <cmath>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF=1001001001;
vector<pair<int64_t,int64_t>>func(int64_t x){
  vector<pair<int64_t,int64_t>>p;
  for(int64_t i=2;i*i<=x;i++){
    int cnt=0;
    if(x%i==0){
    while(x%i==0){cnt++;x/=i;}
    p.push_back(make_pair(i,cnt));
    }
  }
  if(x!=1){p.push_back(make_pair(x,1));}
  return p;
}

int main(){
  int d;
  cin>>d;
  vector<int>c(26);
  for(int i=0;i<26;i++){
    cin>>c[i];
  }
  vector<vector<int>>s(d,vector<int>(26));
  for(int i=0;i<d;i++){
    for(int j=0;j<26;j++){
      cin>>s[i][j];
    }
  }
  vector<int>t(d);
  for(int i=0;i<d;i++){
    cin>>t[i];
  }
  int ans=0;
  vector<int>score(26);
  vector<int>last(26,-1);
  for(int i=0;i<d;i++){
      ans+=s[i][t[i]-1];last[t[i]-1]=i;
      for(int j=0;j<26;j++){
       ans-=(c[j]*(i-last[j]));
  }   cout<<ans<<endl;
  }
  return 0;
}