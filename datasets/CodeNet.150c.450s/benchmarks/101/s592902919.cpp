#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;


int n;

string *color;

queue<int> q;

int *ans;

vector<int> g[1000000];


void bfs(int x){
  color[x] = "gray";
  q.push(x);


  while(q.size() != 0){
    int u = q.front();
    q.pop();

    for(int i = 0; i < g[u].size(); i++){
      int v = g[u][i];
      if(color[v] == "white"){
        color[v] = "gray";
        q.push(v);
      }
    }

    color[u] = "black";
    ans[u] = x;


  }
  return;
}


int main(){

  cin >> n;

  color = new string[n];

  ans = new int[n];

  int m;

  cin >> m;


  int a, b;


  for(int i = 0; i < m; i++){
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }


  for(int i = 0; i < n; i++){
    color[i] = "white";
  }


  for(int j = 0; j < n; j++){
    if(color[j] == "white"){
      bfs(j);
    }
  }

  int q;

  cin >> q;

  for(int i = 0; i < q; i++){
    cin >> a >> b;
    if(ans[a] == ans[b]){
      cout << "yes" << endl;
    }
    else{
      cout << "no" << endl;
    }
  }

  return 0;
}

