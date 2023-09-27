#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<climits>
#include<algorithm>
using namespace std;
typedef int Cost;
typedef int Node;

void dijkstra(int start,   vector<vector< pair<Node,Cost> > > m){
  vector<Cost> costs(m.size());
  bool visited[m.size()];

  fill(costs.begin(),costs.end(),INT_MAX);
  fill(visited,visited+m.size(),false);
  
  priority_queue<pair<Cost,Node> ,vector<pair<Cost,Node> >, greater<pair<Cost,Node> > > q;
  q.push(make_pair(0,start));
  while(!q.empty()){
    Cost c = q.top().first;
    Node n = q.top().second;
    q.pop();
    if(!visited[n]){
      costs[n] = c;
      for(auto &x:m[n]){
        int node = x.first;
        int cost = x.second;
        q.push(make_pair(cost+c,node));
      }
      visited[n] = true;
    }
  }
  for(int i = 0;i < costs.size();i++){
    cout << i << ' ' << costs[i] << endl;
  }
}

int main(){
  int n;
  cin >> n;
  vector<vector< pair<Node,Cost> > > m(n);
  
  for(int i = 0;i < n;i++){
    int u,k;
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      int v,c;
      cin >> v >> c;
      m[u].push_back(make_pair(v,c));
    }
  }
  dijkstra(0,m);
}