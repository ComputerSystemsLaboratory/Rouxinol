#include <iostream>
#define N 101
#define W 10001
#define DIAGONAL 1
#define TOP 0
using namespace std;
void knapsack();
struct I{
  int v,inw;
};
int n,w,C[N][W],G[N][W];
struct I items[N];
int main(){
  int i,j;
  cin >> n >> w;
  for(i=1;i<=n;i++) cin >> items[i].v >> items[i].inw;
  knapsack();
  return 0;
}
void knapsack(){
  int i,j;
  for(i=0;i<=n;i++) C[i][0]=0;
  for(i=0;i<=w;i++) C[0][i]=0;
  for(i=1;i<=n;i++){
    for(j=1;j<=w;j++){
      if(items[i].inw<=j){
	if(items[i].v+C[i-1][j-items[i].inw]>C[i-1][j]){
	  C[i][j]=items[i].v+C[i-1][j-items[i].inw];
	  G[i][j]=DIAGONAL;
	}else{
	  C[i][j]=C[i-1][j];
	  G[i][j]=TOP;
	}
      }else{
	C[i][j]=C[i-1][j];
	G[i][j]=TOP;
      }
    }
  }
  cout << C[n][w] << endl;
}