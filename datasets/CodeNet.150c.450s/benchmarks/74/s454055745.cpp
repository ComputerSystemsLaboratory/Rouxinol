#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int N,M;
  cin >> N >> M;
  int c[M];
  int Ans[M][N+1];
  for(int i=0;i<M;++i){
    cin >> c[i];
  }
  sort(c,c+M);
  for(int i=0;i<M;++i){
    Ans[i][0]=0;
  }
  for(int i=0;i<=N;++i){
    Ans[0][i]=i;
  }
  for(int m=1;m<M;++m){
    for(int n=1;n<=N;++n){
      Ans[m][n]=Ans[m-1][n];
      if(n>=c[m])Ans[m][n]=min(Ans[m][n], min( Ans[m-1][n-c[m]]+1, Ans[m][n-c[m]]+1) ); 
    }
  }
  cout << Ans[M-1][N] << endl;
}