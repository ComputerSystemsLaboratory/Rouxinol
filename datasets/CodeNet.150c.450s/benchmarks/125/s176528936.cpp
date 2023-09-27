#include <iostream>
#include <vector>
using namespace std;

class vertex{
public:
  vector<vertex*> to;
  bool visited;
  int num;
  int visit_time;
  int leave_time;
  vertex(){
    visited=false;
  }
  void dfs(){
    visited=true;
    visit_time=time();
    for(int i=0; i<to.size(); i++){
      if(!to[i]->visited) to[i]->dfs();
    }
    leave_time=time();
  }

  void print(){
    cout << num << " " << visit_time << " " << leave_time << endl;
  }

private:
  static int time(){
    static int ti=0;
    ti++;
    return ti;
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


  for(int v=1; v<=n; v++){
    if(!graph[v].visited) graph[v].dfs();
  }

  for(int v=1; v<=n; v++){
    graph[v].print();
  }
  
  return 0;
}

