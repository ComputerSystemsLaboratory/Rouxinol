#include <iostream>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 1000000


int n,M[100][100],color[100],d[100],p[100];


int prim(){
  int i,u;
  
  for( i = 0; i < 100; i++ ){ 
    color[i] = WHITE;
    d[i] = INFTY;
    p[i] = -1;   
  }

  d[0] = 0;
 
  while(1){
    u = -1;
    int mincost = INFTY;
    
    for( i = 0; i < n; i++ ){
      if( color[i] != BLACK && d[i] < mincost ){
	mincost = d[i];
	u = i;
      }
    }
    
    if( u == -1 ) break;

    color[u] = BLACK;

    for( int v = 0; v < n; v++ ){
      if( color[v] != BLACK && M[u][v] != INFTY ){
	if( M[u][v] < d[v] ){
	  d[v] = M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  int sum = 0;
  for( i = 0; i < n; i++ ){
    if( p[i] != -1 ) sum+= M[i][p[i]];
  }
  return sum;
}

int main(){
  int i,j;
  //,n;
    
  cin >> n;
  for( i = 0; i < n; i++ ){
    for( j = 0; j < n; j++ ){
      cin >> M[i][j];
      if( M[i][j] == -1 ) M[i][j] = INFTY;
    }
  }

  cout << prim() << endl;

  return 0;
}