#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;


int n;

string *color = new string[n];

int *d = new int[n];

queue<int> q;

int c[100][100];

void bfs(){
  color[0] = "gray";
  d[0] = 0;

  q.push(0);


  while(q.size() != 0){
    int u = q.front();
    q.pop();

    for(int v = 0; v < n; v++){
      if(c[u][v] == 1 && color[v] == "white"){
        color[v] = "gray";
        d[v] = d[u] + 1;
        q.push(v);
      }

    }
    color[u] = "black";
  }
}

int main(){

  cin >> n;

  color = new string[n];

  d = new int[n];


  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      c[i][j] = 0;
    }
  }

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    int k;
    cin >> k;
    for(int j = 0; j < k; j++){
      int v;
      cin >> v;
      c[i][v - 1] = 1;
    }
  }

  for(int i = 0; i < n; i++){
    color[i] = "white";
  }

  for(int i = 0; i < n; i++){
    d[i] = -1;
  }

  bfs();





  for(int i = 0; i < n; i++){
    cout << i + 1 << ' ' << d[i] << endl;
  }




  return 0;
}

