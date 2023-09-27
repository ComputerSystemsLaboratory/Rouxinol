#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct Edge{
  int weight;
  int to;
  Edge(int w,int t):weight(w),to(t){}
};

const int inf = 1<<28;

bool operator>(Edge e1,Edge e2){
  if(e1.weight != e2.weight) return (e1.weight > e2.weight);
  else return (e1.to > e2.to);
}

int main(){
  int n;
  cin>>n;
  vector<vector<Edge> > Graph(n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int temp;
      cin>>temp;
      if(temp != -1){
	Graph[i].push_back(Edge(temp,j));
      }
    }
  }
  priority_queue<Edge,vector<Edge>,greater<Edge> > pq;
  pq.push(Edge(0,0));
  vector<bool> used(n,false);
  vector<int> cost(n,inf);
  int ans = 0;
  while(pq.size()){
    Edge e = pq.top();
    pq.pop();
    if(used[e.to]) continue;
    used[e.to] = true;
    ans += e.weight;
    for(int i=0;i<Graph[e.to].size();i++){
      Edge &edge = Graph[e.to][i]; 
      if(cost[edge.to] > edge.weight){
	cost[edge.to] = edge.weight;
	pq.push(edge);
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}