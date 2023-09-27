#include <iostream>
#include <algorithm>
#define N 50001
#define INFINITY 2000000000
using namespace std;
const int M = 21;
void getTheNumberOfCoin();
int n,m,T[M][N],C[M],i,j,minv;
int main(){
  cin >> n >> m;
  for(i=1;i<=m;i++) cin >> C[i];
  getTheNumberOfCoin();
  return 0;
}
void getTheNumberOfCoin(){
  for(i=1;i<=n;i++) T[0][i]=INFINITY;
  for(i=1;i<=m;i++) T[i][0]=0;
  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
      if(j>=C[i]){
	T[i][j]=min(T[i-1][j],T[i][j-C[i]]+1);
      }
      else{
	T[i][j]=T[i-1][j];
      }
    }
  }
  minv=INFINITY;
  for(i=1;i<=m;i++){
    minv=min(minv,T[i][n]);
  }
  cout << minv << endl;
}