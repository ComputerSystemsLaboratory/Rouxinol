#include <iostream>

using namespace std;
static const int inf = 10000;
static const int emp = -1;
static const int black = 1;
static const int white = 0;

int   graph[124][124] = {{}};;
int d[124] = {};
int color[124] = {};
int p[124] = {};
int n;

int  prim(){

  for(int i = 0;i < n;i++){
    d[i] = inf;
    color[i] = white;
    p[i] = -1;
  }

  d[0] = 0;
  int u ,v;
 

  while(1){

    v = inf;
    u = -1;

    for(int i = 0;i < n;i++){
      if(d[i] < v && color[i] != black){
	v= d[i];
	u = i;
      }
    }
    //    cout << "u = " << u << endl; 

    if(u == -1) break;
    color[u] = black;

    // cout << 'a' << endl;
    for(int i = 0;i < n;i++){
      if(graph[u][i] != -1 && color[i] != black){
	if(graph[u][i] < d[i]){
	  d[i] = graph[u][i];
	  p[i]= u;
	  //  cout << "d = " << d[i] <<endl;
	  // cout << "i = " << i << endl;
	}
      }
    }
  }

  int sum = 0;
  for(int i = 0;i < n;i++){
    if(p[i] != -1) sum += graph[i][p[i]];
  }
  return sum;
}



int main(){

  cin >> n;

  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      cin >> graph[i][j];
    }
  }



  cout <<  prim() << endl;

  return 0;
}