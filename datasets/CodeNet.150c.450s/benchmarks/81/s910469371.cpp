#include <iostream>
using namespace std;

#define rep(i,a) for(int i=0;i<(int)(a);i++)
const int INF = 1000000007;
const int MAX_V = 17;

int G[MAX_V][MAX_V];
int A[MAX_V][MAX_V];

int V;

void wf(){
  for( int k = 0; k < V ; k++){
    for( int i = 0; i < V ; i++){
      for( int j = 0; j < V ; j++){
	A[i][j] = min(A[i][j], A[i][k] + A[k][j] );
      }
    }
  }
}


int main(){

  int n;
  V = 10;

  while(1){
    cin >> n;
    if(n == 0) break;
    rep(i,V){
      rep(j,V){
	G[i][j] = INF;
      }
      G[i][i] = 0;
    }
    
    V = 0;
    rep(i,n){
      int a,b,c;
      cin >> a >> b >> c;
      V = max(V,max(a,b));
      G[a][b] = c;
      G[b][a] = c;
    }
    V++;

    rep(i,V){
      rep(j,V){
	A[i][j] = G[i][j];
      }
    }

    wf();

    int sum,min = INF,in;
    rep(j,V){
      sum = 0;
      rep(i,V){
	sum += A[j][i];
      }
      if(sum > 0 && sum < min) {
	min = sum;
	in = j;
      }
    }

    cout <<in << " "<< min << endl;
  }

     return 0;
}