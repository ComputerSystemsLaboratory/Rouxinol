#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

int timex = 0;

int n;

string *color = new string[n];

int *d = new int[n];

int *f = new int[n];

int c[100][100];

void dfs(int u){
  color[u] = "glay";
  d[u] = ++timex;


  for(int v = 0; v < n; v++){
    if(c[u][v] == 1 && color[v] == "white"){
      dfs(v);
    }
  }

color[u] = "black";
f[u] = ++timex;



}

int main(){

  cin >> n;

  color = new string[n];

  d = new int[n];

  f = new int[n];


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
    if(color[i] == "white"){
      dfs(i);
    }
  }



  for(int i = 0; i < n; i++){
    cout << i + 1 << ' ' << d[i] << ' ' << f[i] << endl;
  }




  return 0;
}

