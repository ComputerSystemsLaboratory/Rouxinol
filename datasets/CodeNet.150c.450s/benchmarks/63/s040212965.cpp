#include <iostream>

using namespace std;

const int INF = 999999999;
struct edge{
  int from;
  int to;
  int cost;
};

int main(){
  //Initial process
  int vNum, eNum, r;
  cin >> vNum >> eNum >> r;
  int *d = new int[vNum];
  edge *eArray = new edge[eNum];
  int from, to, cost;
  for (int i=0; i<eNum; i++){
    cin >> from >> to >> cost;
    eArray[i] = {from, to, cost};
  }
  for (int i=0; i<vNum; i++){
    d[i] = INF;
  }
  d[r] = 0;
  //calculation
  bool update;
  int newCost;
  edge e;
  while(true){
    update = false;
    for (int i=0; i<eNum; i++){
      e = eArray[i];
      newCost = d[e.from] + e.cost;
      if (d[e.to] > newCost){
        d[e.to] = newCost;
        update = true;
      }
    }
    if (!update) break;
  }
  //output
  for (int i=0; i<vNum; i++){
    if (d[i] == INF) cout << "INF" << endl;
    else cout << d[i] << endl;
  }
}