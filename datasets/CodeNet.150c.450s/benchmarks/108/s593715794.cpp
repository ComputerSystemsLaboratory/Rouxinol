#include<bits/stdc++.h>
using namespace std;

typedef pair< int,int > P;
int N;
vector< vector< int > > Edge;
vector< int > Csum;

void bfs(){
  Csum.assign(N+1,-1);
  queue< P > que;
  que.push(P(0,0));
  Csum[0] = 0;
  while(!que.empty()){
    int now = que.front().second;
    int cost = que.front().first;
    que.pop();
    for(int i=0;i<Edge[now].size();i++){
      if(Csum[Edge[now][i]] != -1) continue;
      Csum[Edge[now][i]] = cost+1;
      que.push(P(cost+1,Edge[now][i]));
    }
  }
}

int main(){
  cin >> N;
  Edge.resize(N+1);
  for(int i=0;i<N;i++){
    int u,k; cin >> u >> k;
    for(int j=0;j<k;j++){
      int e; cin >> e; e--;
      Edge[i].push_back(e);
    }
  }
  bfs();
  for(int i=0;i<N;i++){
    cout << i+1 << " " << Csum[i] << endl;
  }
}