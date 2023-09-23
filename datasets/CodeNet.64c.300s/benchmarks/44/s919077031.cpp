#include <iostream>
#include <algorithm>
#include <string.h>
#define INF 100000000
using namespace std;
int d[1000][1000];
int V; 


void warshall_floyd(){
  for(int i = 0 ; i <= V ; i++ )d[i][i] = 0;

  for(int k = 0 ; k <= V ; k++){
    for(int i = 0 ; i <= V ; i++){
      for(int j = 0 ; j <= V ; j++ ){
	d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
      }
    }
  }
}


int main(){
  int n;
  while( cin >> n,n){
     V = 0;
    for(int i = 0 ; i < 1000 ; i++){
      for(int j = 0 ; j < 1000 ; j++){
	d[i][j] = INF;
      }
    }
    for(int i = 0 ; i < n ; i++){
      int a,b,c;
      cin >> a >> b >> c;
      d[a][b] = c;
      d[b][a] = c;
      if(a > V )V = a;
      if(b > V )V = b;
    }

    warshall_floyd();

    int ans = INF,ansi;
    for(int i = 0 ; i <= V ; i++){
      int sum = 0;
      for(int j = 0 ; j <= V ; j++){
	sum+=d[i][j];
      }
	if(sum < ans){
	  ans = sum;
	  ansi = i;
	}
    }
    cout << ansi << " " << ans << endl;
  }
  return 0;
}