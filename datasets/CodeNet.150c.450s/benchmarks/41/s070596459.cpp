#include <bits/stdc++.h>

using namespace std;

#define MAX 101
#define INF LLONG_MAX/4
typedef long long ll;


int main(){
  int V,E,a,b;
  ll d[MAX][MAX],c;

  for(int i = 0 ; i < MAX ; i++){
    for(int j = 0 ; j < MAX ; j++){
      d[i][j] = INF;
    }
    d[i][i] = 0;
  }

  cin >> V >> E;
  for(int i = 0 ; i < E ; i++){
    cin >> a >> b >> c;
    d[a][b] = c;
  }


  for(int k = 0 ; k < V ; k++){
    for(int i = 0 ; i < V ; i++){
      for(int j = 0 ; j < V ; j++){
	if(d[i][k] != INF && d[k][j] != INF){
	  d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
	}
      }
    }
  }

  bool check = false;
  for(int i = 0 ; i < V ; i++){
    if(d[i][i] < 0){
      check = true;
      break;
    }
  }

  if(check){
    cout << "NEGATIVE CYCLE" << endl;
  }else{
    for(int i = 0 ; i < V ; i++){
      for(int j = 0 ; j < V ; j++){
	if(d[i][j] == INF){
	  cout << "INF";
	}else{
	  cout << d[i][j];
	} 

	if(j != V-1){
	  cout << " ";
	}
      }
      cout << endl;
    }
  }
  
  return 0;
}