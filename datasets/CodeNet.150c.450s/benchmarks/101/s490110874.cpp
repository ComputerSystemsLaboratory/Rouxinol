#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

vector<int> vec[100010],color(100010,-1);

void dfs(int u){
  if(color[u]==-1) color[u]=u;
  
  stack<int> s;
  s.push(u);
  while(!s.empty()){
    int r=s.top(); s.pop();
    for(auto x:vec[r]){
      if(color[x]==-1){
        color[x]=u;
        s.push(x);
      }
    }
  }
}
  

int main() {
  int n,m,q;
  cin>>n>>m;
  
  int s,t;
  rep(i,m){
    cin>>s>>t;
    vec[s].push_back(t);
    vec[t].push_back(s);
  }
  
  rep(i,n){
    if(color[i]==-1) dfs(i);
  }
  
  cin>>q;
  rep(i,q){
    cin>>s>>t;
    if(color[s]==color[t]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  
  return 0;
}
