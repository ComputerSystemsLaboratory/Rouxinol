#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <iomanip>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF=1001001001;
vector<pair<int64_t,int64_t>>prime_factorize(int64_t x){
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
vector<int>g[100005];
int main() {
  int N,M;
  cin>>N>>M;
  for(int i=0;i<M;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  queue<int>q;
  vector<int>dist(N,-1);
  vector<int>pre(N,-1);
  dist[0]=0;
  q.push(0);
  while(!q.empty()){
    int v=q.front();
    q.pop();
    for(auto u:g[v]){
      if(dist[u]==-1){
        dist[u]=dist[v]+1;
        pre[u]=v;
        q.push(u);
      }
    }
  }
  cout<<"Yes"<<endl;
  for(int i=1;i<N;i++){
    cout<<pre[i]+1<<endl;
  }
  return 0;
}