#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class vertex{
public:
  vector<vertex*> to;
  bool visited;
  int num;
  int dis;

  vertex(){
    visited=false;
    dis = -1;
  }

  void bfs(int dis){
    this->dis=dis;
    visited=true;
    queue<vertex*> qv; qv.push(this);

    while(!qv.empty()){
      vertex* now = qv.front();  qv.pop();

      for(int i=0; i<now->to.size(); i++){
        if(!now->to[i]->visited){
          qv.push(now->to[i]);
          now->to[i]->visited = true;
          now->to[i]->dis = now->dis+1;
        }
      }
    }
  }

  void print(){
    cout << num << " " << dis << endl;
  }
};

int main(){
  int n; cin >> n;
  vertex graph[n+1];

  int v, k, to;
  for(int i=0; i<n; i++){
    cin >> v >> k;
    graph[v].num = v;
    for(int j=0; j<k; j++){
      cin >> to;
      graph[v].to.push_back(&graph[to]);
    }
  }

  graph[1].bfs(0);

  for(int v=1; v<=n; v++){
    graph[v].print();
  }

  return 0;
}

