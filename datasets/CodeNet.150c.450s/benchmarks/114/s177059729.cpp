#include<iostream>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

struct Node{
  int color, dist, parent;
};

int n, M[MAX][MAX];
Node node[MAX];

void Printnodes(){
  string col[3] = {"WHITE", "GRAY ", "BLACK"};
  for(int i = 0; i < n; i++){
    cout << "nodeID : " << i ;
    cout << " color : " << col[node[i].color];
    cout << " parent : " << node[i].parent;
    cout << " dist : " << node[i].dist << endl;
  }
  cout << endl;
}

int main(){
  cin >> n;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> M[i][j];
    }
    node[i].color = WHITE;
    node[i].dist = INFTY;
    node[i].parent = -1;
  }

  int p = 0;
  node[p].dist = 0;

  while(true){
    //Printnodes();

    for(int i = 0; i < n; i++){
      if(M[p][i] >= 0 && node[i].color != BLACK){
        if(node[i].dist > M[p][i]){
          node[i].dist = M[p][i];
          node[i].parent = p;
          node[i].color = GRAY;
        }
      }
    }

    int min_d = INFTY;
    p = -1;
    for(int i = 0; i < n; i++){
      if(node[i].dist < min_d && node[i].color != BLACK){
        min_d = node[i].dist;
        p = i;
      }
    }

    if(p == -1)
      break;

    node[p].color = BLACK;
    //cout << "node " << p << " turns to BLACK!" << endl;
  }

  int sum = 0;
  for(int i = 0; i < n; i++){
    if(node[i].parent != -1)
      sum += M[i][node[i].parent];
  }
  cout << sum << endl;
  return 0;
}