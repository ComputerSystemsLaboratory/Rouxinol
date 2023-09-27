#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define INF 1<<30
#define MAX_V 100

int n;
int M[MAX_V][MAX_V];
bool added[MAX_V];
int d[MAX_V], p[MAX_V];

int prim(){
  for(int i = 0; i < n; i++){
    d[i] = INF;
    added[i] = false;
  }

  d[0] = 0; p[0] = -1;

  while(true){
    int minCost = INF, u;
    for(int i = 0; i < n; i++){
      if(!added[i] && d[i] < minCost){
        minCost = d[i];
        u = i;
      }
    }

    if(minCost == INF) break;

    added[u] = true;

    for(int i = 0; i < n; i++){
      if(!added[i] && M[u][i] != -1 && M[u][i] < d[i]){
        d[i] = M[u][i];
        p[i] = u;
      }
    }
  }
  
  int sum = 0;
  for(int i = 0; i < n; i++){
    if(p[i] != -1) sum += M[i][p[i]];
  }

  return sum;
}

int main(void){
  cin >> n;
  for(int i = 0; i < n; i++) for(int j = 0; j < n; j++){
    cin >> M[i][j];
  }
  cout << prim() << endl;
  return 0;
}