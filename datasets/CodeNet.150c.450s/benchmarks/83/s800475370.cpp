#include <iostream>
#include <algorithm>
using namespace std;

int sack[101][10001];
int v[100],w[100];
int N,W;

int DP(int i,int j){
  /*cout << endl;
  for(int k=0;k<N+1;k++){
    for(int l=0;l<W+1;l++){
      cout << sack[k][l]  <<" ";
    }
    cout << endl;
  }
  */
  if(sack[i][j]!=-1){
    return sack[i][j];
  }
  int res;
  if(i==N){
    res=0;
  }else if(j < w[i]){
    res = DP(i+1,j);
  }else{
    res = max(
      DP(i+1,j),
      DP(i+1,j-w[i])+v[i]
    );
  }
  return sack[i][j]=res;
}

int main(){
  for(int i=0;i<101;i++){
    for(int j=0;j<10001;j++){
      sack[i][j]=-1;
    }
  }
  cin >> N >> W;
  for(int i=0;i<N;i++){
    cin >> v[i] >> w[i];
  }
  cout << DP(0,W) << endl;
}
  