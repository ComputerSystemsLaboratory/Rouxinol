#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n,W;
  int v,w;
  cin >> n >> W;
  int g[n][W+1];
  for(int i=0;i<n;i++){
    cin >> v >> w;
    for(int j=0;j<W+1;j++){
      if(i==0){
	if(j-w>=0)g[i][j]=v;
	else g[i][j]=0;
      }
      else{
	if(j-w<0)g[i][j]=g[i-1][j];
	else g[i][j]=max(g[i-1][j],g[i-1][j-w]+v);
      }
    }
  }
  cout << g[n-1][W] << endl;
  return 0;
}