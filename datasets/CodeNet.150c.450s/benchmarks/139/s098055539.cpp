#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define P pair<int,int>

vector<int> to[100010];
const int INF=INT_MAX;

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> past(n);
  rep(i,m){
    int a,b;
    cin>>a>>b;
    a--;b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  rep(i,n){
    past[i]=INF;
  }
  past[0]=0;
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    int now=q.front(); q.pop();
    for(auto x : to[now]){
      if(past[x]!=INF) continue;
      past[x]=now;
      q.push(x);
    }
  }
  cout<<"Yes"<<endl;
  for(int i=1; i<n; i++){
    cout<<past[i]+1<<endl;
  }
}
