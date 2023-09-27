#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>

using namespace std;
int main(){
  int u, i, id, k, j;
  cin >> u;
  unordered_map<int, vector<int> > mymap;
  queue<vector<int> > myqueue;
  for (i = 0; i < u; ++i){
    cin >> id >> k;
    vector<int> points;
    for (j = 0; j < k; ++j){
      int a;
      cin >> a;
      points.push_back(a);
    }
    mymap[id] = points;
    if(id == 1){
      myqueue.push(points);
    }
  }
  
  bool visited[u+1];
  for (j = 1; j <= u; ++j){
    visited[j] = false;
  }
  visited[1] = true;

  int dist[u+1];
  for (j = 1; j <= u; ++j){
    dist[j] = -1;
  }
  dist[1] = 0;
  int d = 1;

  while(!myqueue.empty()){
    vector<int> combined;
    for (i = 0; i < myqueue.front().size(); ++i){
      if(!visited[myqueue.front()[i]]){
        dist[myqueue.front()[i]] = d;
        visited[myqueue.front()[i]] = true;
        if(combined.empty()){
          combined = mymap[myqueue.front()[i]];
        }else{
          combined.insert(combined.end(), mymap[myqueue.front()[i]].begin(), mymap[myqueue.front()[i]].end());
        }
      }
    }
    if(!combined.empty()){
      myqueue.push(combined);
    }
    myqueue.pop();
    d++;
  }

  for (j = 1; j <= u; ++j){
    cout << j << " " << dist[j] << endl;
  }

}