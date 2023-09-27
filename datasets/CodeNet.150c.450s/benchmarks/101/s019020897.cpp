#include <iostream>
#include <vector>
using namespace std;
#define MAX_V 100000

int n, v, q;
vector<int> G[MAX_V];
bool visited[MAX_V];
int group[MAX_V];


void init(){
  for(int i = 0; i < v; i++){
    visited[i] = false;
    group[i] = -1;
  }
}

void dfs(int v, int g){
  group[v] = g;
  visited[v] = true;
  for(int i = 0; i < G[v].size(); i++){
    int to = G[v][i];
    if(!visited[to]){
      dfs(to, g);
    }
  }
}

int main(void){
  cin >> v >> n;
  for(int i = 0; i < n; i++){
    int from, to;
    cin >> from >> to;
    G[from].push_back(to);
    G[to].push_back(from);
  }
  init();
  for(int i = 0; i < v; i++){
    if(!visited[i]) dfs(i, i);
  }
  cin >> q;
  for(int i = 0; i < q; i++){
    int s, t;
    cin >> s >> t;
    if(group[s] != -1 && group[t] != -1 && group[s] == group[t]) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}