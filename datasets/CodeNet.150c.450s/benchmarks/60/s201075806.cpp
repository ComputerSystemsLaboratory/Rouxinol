#include<iostream>
using namespace std;

int main(){
  int i,j,u,k,v,n,d[101][101]={0};
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> u >> k;
    for(j = 0; j < k; j++){
      cin >> v;
      d[u][v]=1;
    }
  }
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      if(j==n){
      cout << d[i][j];
      }else{
      cout << d[i][j] << " ";
      }
    }
    cout << endl;
  }
  return 0;
}