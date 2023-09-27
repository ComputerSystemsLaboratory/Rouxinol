#include<iostream>
#include<vector>
#include<stack>
static const int MAX=100000;
static const int NIL=-1;

int n;
std::vector<int> G[MAX];
int color[MAX];
void DFS(int,int);
void assignColor(void);

int main(){
  int s, t, m, q;
  std::cin >> n >> m;
  for(int i=0; i<m; i++){
    std::cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }
  assignColor();
  std::cin >> q;
  for(int i=0; i<q; i++){
    std::cin >> s >> t;
    if(color[s] == color[t]) std::cout << "yes\n";
    else std::cout << "no\n";
  }
  return 0;
}
void assignColor(void){
  int id=1;
  for(int i=0; i<n; i++) color[i] = NIL;
  for(int u=0; u<n; u++) if(color[u] == NIL) DFS(u, id++);
}
void DFS(int r, int c){
  std::stack<int> S;
  S.push(r);
  color[r] = c;
  while(!S.empty()){
    int u=S.top(); S.pop();
    for(int i=0; i<G[u].size(); i++){
      int v=G[u][i];
      if(color[v] == NIL){
        color[v] = c;
        S.push(v);
      }
    }
  }
}