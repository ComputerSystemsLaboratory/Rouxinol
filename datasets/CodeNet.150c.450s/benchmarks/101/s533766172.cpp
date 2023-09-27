#include <iostream>
#include <vector>
using namespace std;

class vertex{
public:
  vector<vertex*> to;
  bool visited;
  int num;
  int group;

  vertex(){
    visited=false;
  }

  void dfs(int group){
    visited=true;
    this->group = group;
    for(int i=0; i<to.size(); i++){
      if(!to[i]->visited) to[i]->dfs(group);
    }
  }
};

int main(){
  int n, m; cin >> n >> m;
  vertex graph[n];

  //隣接リストにグラフを格納
  int v, k, to;
  for(int i=0; i<m; i++){
    cin >> v >> to;
    graph[v].num = v;
    graph[v].to.push_back(&graph[to]);
    graph[to].num = to;
    graph[to].to.push_back(&graph[v]);
  }

  //頂点0からdfsを行い、グループ分け(各連結成分ごとに1から昇順に番号をつける)
  for(int v=0, group=1; v<n; v++){
    if(!graph[v].visited){
      graph[v].dfs(group);
      group++;
    }
  }

  //回答を得る
  int q, v1, v2; cin >> q;
  bool ans[q];
  for(int i=0; i<q; i++){
    cin >> v1 >> v2;
    if(graph[v1].group==graph[v2].group) ans[i]=true;
    else ans[i]=false;
  }

  //回答出力
  for(int i=0; i<q; i++){
    if(ans[i]) cout << "yes" << endl;
    else cout << "no" << endl;
  }

  return 0;
}

