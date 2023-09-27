#include<iostream>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

struct Node{int color, dist, parent;};

int M[MAX][MAX], n;
Node node[MAX];

int main(){
  cin >> n;

  //initialize M and node
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      M[i][j] = INFTY;
    }
    node[i].color = WHITE;
    node[i].dist = INFTY;
    node[i].parent = -1;
  }

  //input distances
  for(int i = 0; i < n; i++){
    int u, k, v, c;
    cin >> u >> k;
    while(k--){
      cin >> v >> c;
      M[u][v] = c;
    }
  }

  int p = 0, min_dis;
  node[p].dist = 0;
  node[p].color = BLACK;

  while(true){
    for(int i = 0; i < n; i++){
      if(M[p][i] != INFTY && node[i].color != BLACK){
        int d = node[p].dist + M[p][i];
        if(node[i].dist > d){
          node[i].dist = d;
          node[i].color = GRAY;
          node[i].parent = p;
        }
      }
    }

    p = -1;
    min_dis = INFTY;
    for(int i = 0; i < n; i++){
      if(node[i].color == GRAY && node[i].dist < min_dis){
        p = i;
        min_dis = node[i].dist;
      }
    }

    if(p == -1)
      break;

    node[p].color = BLACK;
  }

  for(int i = 0; i < n; i++){
    cout << i << " " << node[i].dist << endl;
  }
}