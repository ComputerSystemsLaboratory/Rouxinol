#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define MAX_N 100
#define MAX_EDGE_COST 20000
int Graph[MAX_N+1][MAX_N+1];
int n;

int prim(int initial_vertex) {
  bool visited[n+1];
  for(int i=1;i<=n;i++) visited[i] = false;
  vector<int> vertexes;
  vertexes.push_back(initial_vertex);
  visited[initial_vertex] = true;
  int total_edge_cost = 0;
  while(vertexes.size() < n) {
    // find minimum edge cost in vertexes
    int minimum_edge_cost = MAX_EDGE_COST;
    int next_v;
    for(int i=0;i<vertexes.size();i++) {
      int v = vertexes[i];
      for(int j=1;j<=n;j++) {
        if(!visited[j]) {
          if(Graph[v][j] != -1) {
            if(Graph[v][j] < minimum_edge_cost) {
              minimum_edge_cost = Graph[v][j];
              next_v = j;
            }
          }
        }
      }
    }
    visited[next_v] = true;
    vertexes.push_back(next_v);
    total_edge_cost += minimum_edge_cost;
  }
  return total_edge_cost;
}

int main() {
  scanf("%d",&n);
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {
      scanf("%d ",&Graph[i][j]);
    }
  }
  printf("%d\n",prim(1));
}