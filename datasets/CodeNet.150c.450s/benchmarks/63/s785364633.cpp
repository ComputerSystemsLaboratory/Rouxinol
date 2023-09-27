#include <bits/stdc++.h>
using namespace std;

int m, n, r;
vector<pair<int, int> > graph[100010];
int dist[100010] = {};

int main(){
  cin >> n >> m >> r;

  int a, b, c;
  for(int i = 0;i < m;i++){
    cin >> a >> b >> c;
    graph[a].push_back(make_pair(b,c));
  }

  queue<pair<int, int> > que;

  for(int i = 0;i < n;i++) dist[i] = INT_MAX;

  dist[r] = 0;

  que.push(make_pair(r,0));

  pair<int, int> tmp;
  while(!que.empty()){
    tmp = que.front(); que.pop();
    for(int i = 0;i < graph[tmp.first].size(); i++){
      if(dist[graph[tmp.first][i].first] > tmp.second + graph[tmp.first][i].second){
        dist[graph[tmp.first][i].first] = tmp.second + graph[tmp.first][i].second;
        que.push(make_pair(graph[tmp.first][i].first,dist[graph[tmp.first][i].first]));
      }
    }
  }

  for(int i = 0;i < n;i++){
    if(dist[i] == INT_MAX) cout << "INF" << endl;
    else cout << dist[i] << endl;
  }

  return 0;
}

