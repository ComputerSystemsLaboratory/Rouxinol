#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[100];
int dist[100]={0};
int main(){
  int n;
  cin >> n;

  for(int i=0;i<n;++i){
    int u,k;
    cin >> u >> k;
    for(int i=0;i<k;++i){
      int v;
      cin >> v;
      graph[u-1].push_back(v-1);
    }
    dist[i] = -1;
  }

  queue<int> q;
  q.push(0);
  dist[0] = 0;
  while(!q.empty()){
    auto v = q.front();q.pop();
    for(auto next_v:graph[v]){
      if(dist[next_v]==-1){
        dist[next_v] = dist[v]+1;
        q.push(next_v);
      }
    }
  }
  for(int i=0;i<n;++i){
    cout << i+1 << " " << dist[i] << endl;
  }
}