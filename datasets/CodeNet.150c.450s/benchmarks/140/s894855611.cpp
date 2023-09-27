#include <bits/stdc++.h>
using namespace std;
struct edge {
  int x;
  int y;
  int weight;
  bool operator<(const edge& another) const {
    return weight < another.weight;
  }
  bool operator>(const edge& another) const {
    return weight > another.weight;
  }
};

vector<int> data(100010,-1);//n=データ数

int root(int x){
  if(data[x] == -1)return x;
  else return data[x] = root(data[x]);
}

bool same(int x,int y){
  if(root(x) == root(y))return 1;
  else return 0;
}

int unite(int x,int y){
  if(!same(x,y))data[root(x)] = y;
  return 0;
}

vector<edge> Kruskal(vector<edge> E){
  vector<edge> answer;
  priority_queue<edge,vector<edge>,greater<edge> > pque;
  for(int i = 0;i < data.size();i++)data[i] = -1;
  for(int i = 0;i < E.size();i++)pque.push(E[i]);
  while(pque.size()){
    if(!same(pque.top().x,pque.top().y)){
      answer.push_back(pque.top());
      unite(pque.top().x,pque.top().y);
    }
    pque.pop();
  }
  return answer;
}

int main() {
  int v,e,s,t,w,ans=0;
  cin >> v >> e;
  vector<edge> edges;
  for(int i = 0;i < e;i++){
    edge E;
    cin >> E.x >> E.y >> E.weight;
    edges.push_back(E);
  }
  edges = Kruskal(edges);
  for(int i = 0;i < edges.size();i++)ans+=edges[i].weight;
  cout << ans <<endl;
}
