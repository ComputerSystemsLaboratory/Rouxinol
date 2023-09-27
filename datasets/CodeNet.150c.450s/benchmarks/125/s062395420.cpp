#include <iostream>
#include <vector>

using namespace std;

std::vector<int> graph[100];
int d[100]={0},f[100]={0};
int t = 0;

void dfs(int v){
  t++;
  d[v] = t;
  for(const auto &next_v:graph[v]){
    if(d[next_v]==0){
      dfs(next_v);
    }
  }
  t++;
  f[v] = t;
}

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;++i){
    int u,k;
    cin >> u >> k;
    for(int j=0;j<k;++j){
      int v;
      cin >> v;
      graph[u-1].push_back(v-1);
    }
  }
  
  for(int i=0;i<n;++i){
    if(d[i]==0) dfs(i);
  }
  for(int i=0;i<n;++i){
    cout << i+1 << " " << d[i] << " " << f[i] << endl;
  }
  
  return 0;
}