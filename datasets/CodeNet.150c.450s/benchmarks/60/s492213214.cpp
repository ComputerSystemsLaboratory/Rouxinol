#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<vector<int> > graph;
  int n;

  cin >> n;
  graph.resize(n);
  for(int i=0;i<n;i++){
    graph[i].resize(n);
    for(int j=0;j<n;j++){
      graph[i][j]=0;
    }
  }

  for(int i=0;i<n;i++){
    int idx,times;

    cin >> idx >> times;
    for(int j=0;j<times;j++){
      int path;

      cin >> path;
      graph[idx-1][path-1]=1;
    }
  }

  for(int i=0;i<n;i++){
    cout << graph[i][0];
    for(int j=1;j<n;j++){
      cout << " " << graph[i][j];
    }
    cout << endl;
  }
}
