#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <utility>
#include <queue>

using namespace std;
using llong = long long;
using P = pair<int,int>;

map<int,int> graph[10000];
bool visited[10000];

int main(){
  int N , M ;
  cin >> N >> M;
  for(int i=0;i<M;++i){
    int s,t,w;
    cin >> s >> t >> w;
    graph[s][t] = w;
    graph[t][s] = w;
  }
  priority_queue<P,vector<P>,greater<P> > Q;
  Q.push(P(0,0));
  int sum = 0;
  while(!Q.empty()){
    int cost = Q.top().first , v = Q.top().second;
    Q.pop();
    if(visited[v]) continue;
    visited[v] = true;
    sum += cost;
    for(const auto &n:graph[v]){
      Q.push(P(n.second,n.first));
    }
  }

  cout << sum << endl;
  return 0;
}