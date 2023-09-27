#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define D_MAX 1 << 21
#define N_MAX 100
using namespace std;

int dis[N_MAX];
int n;

struct node {
  int to;
  int cost;
  node(int to,int cost) {
    this->to = to;
    this->cost = cost;
  }
};

void dijkstra(int st,vector< vector<node*> > &nodes) {
  for(int i=0;i<n;i++) dis[i] = D_MAX;
  dis[st] = 0;
  bool visited[n]; for(int i=0;i<n;i++) visited[i] = false;
  vector<int> vertexes;
  visited[st] = true;
  vertexes.push_back(st);
  int pre_cost = 0;
  while(vertexes.size() < n) {
    // update distance list
    int v = vertexes[vertexes.size()-1];
    for(int j=0;j<nodes[v].size();j++) {
      int u = nodes[v][j]->to;
      if(visited[u]) continue;
      int cost = nodes[v][j]->cost + pre_cost;
      dis[u] = min(dis[u],cost);
    }
    // find vertex which has smallest distance.
    int next_v;
    int minimum = D_MAX;
    for(int i=0;i<n;i++) {
      if(visited[i]) continue;
      if(dis[i] < minimum) {
        minimum = dis[i];
        next_v = i;
      }
    }
    visited[next_v] = true;
    vertexes.push_back(next_v);
    pre_cost = dis[next_v];
  }
}

int main() {
  scanf("%d",&n);
  int u,k,v,c;
  vector<vector< node*> > nodes;
  nodes.resize(n);
  for(int i=0;i<n;i++) {
    scanf("%d %d",&u,&k);
    for(int j=0;j<k;j++) {
      scanf("%d %d",&v,&c);
      nodes[u].push_back(new node(v,c));
    }
  }

  // check
  /*
  for(int i=0;i<nodes.size();i++) {
    for(int j=0;j<nodes[i].size();j++) {
      printf("%2d :%2d %2d\n",i,nodes[i][j]->to,nodes[i][j]->cost);
    }
  }
  */

  dijkstra(0,nodes);
  for(int i=0;i<n;i++) {
    printf("%d %d\n",i,dis[i]);
  }
}