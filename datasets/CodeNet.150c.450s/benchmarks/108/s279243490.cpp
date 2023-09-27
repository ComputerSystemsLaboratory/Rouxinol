#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

const int MAX_V = 101;
vector<int> adj[MAX_V];
bool used[MAX_V];
int id[MAX_V];

void bfs(int s){
  queue<int> que;
  que.push(s);
  used[s]=true;
  id[s]=0;
  for(;!que.empty();){
    int p=que.front();
    que.pop();
    for(int i:adj[p]){
      if(!used[i]){
	que.push(i);
	used[i]=true;
	id[i]=id[p]+1;
      }
    }
  }
}

int main(){
  fill(id,id+MAX_V,-1);
  int n;cin>>n;
  REP(i,n){
    int u,k,v;cin>>u>>k;
    REP(j,k){
      cin>>v;
      adj[u].push_back(v);
    }
  }
  bfs(1);
  REP(i,n) cout<<i+1<<" "<<id[i+1]<<endl;
}