//
//
//  algoC.cpp - created by us162022
//
#include <iostream>
#include <queue>
using namespace std;
struct Node{
  int u,k,v[99];
  int distance;
};

int main(int argc, char *argv[])
{
  int n;
  Node node[100];
  queue<Node> que;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> node[i].u >> node[i].k;

    for(int j=0; j<node[i].k; j++)
      cin >> node[i].v[j];

    node[i].distance=-1;
  }

  node[0].distance = 0;
  que.push(node[0]);

  while(!que.empty()){
    Node fro = que.front();

    for(int i=0; i<fro.k; i++){
      int x = fro.v[i]-1;
  
      if(node[x].distance==-1){
	    node[x].distance = fro.distance+1;

        que.push(node[x]);
        }
    }

    que.pop();
  }

  for(int i=0; i<n; i++)
    cout << node[i].u << " " << node[i].distance << endl;

}