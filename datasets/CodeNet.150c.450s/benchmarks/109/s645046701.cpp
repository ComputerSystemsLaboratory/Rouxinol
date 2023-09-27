//#include<bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<string>
#include<cmath>
#include<cassert>
#include<map>
#include<sstream>

  using namespace std;

typedef long long ll;
typedef ll int__;
#define rep(i,j) for(int__ (i)=0;(i)<(j);(i)++)
#define repeat(i,j,k) for(int__ i=(j);i<(k);(i)++)
#define all(v) begin(v),end(v)


typedef pair<ll,ll> pii;

bool comp(const pii l,const pii r){
  return l.second==r.second ? l.first<r.first : l.second<r.second;
}

int main()
{
  
  while(true){
    ll n;cin>>n;
    if(n==0)break;

    vector<pii> input(n);
    rep(i,n){
      string s,e;cin>>s>>e;
      pii train;
      const char *s_char = s.c_str();
      const char *e_char = e.c_str();
      ll hour,minute,second;
      sscanf(s_char, "%lld:%lld:%lld",&hour,&minute,&second);
      train.second=hour*60*60+minute*60+second;
      sscanf(e_char, "%lld:%lld:%lld",&hour,&minute,&second);
      train.first=hour*60*60+minute*60+second;
      input[i]=train;
    }
    
    sort(all(input),comp);
    
    priority_queue<pii,vector<pii>,greater<pii> > que;
    ll ans=0;
    rep(i,n){
      pii train=input[i];

      while(que.size()>0 && train.second>=que.top().first){
        que.pop();
      }
      que.push(train);
      ans=max(ans,(ll)que.size());
    }
    cout<<ans<<endl;
  }
  
  return 0;
}