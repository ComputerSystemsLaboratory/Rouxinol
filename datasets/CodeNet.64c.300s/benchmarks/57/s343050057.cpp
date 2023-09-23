#include<iostream>
using namespace std;
int main(){
  int n,m;
  while(cin >>n>>m,n||m){
    int f[10000][10]={0};
    int ans = 0;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >>f[j][i];
    for(int i=0; i<(1<<n); i++){
      int x = 0;
      for(int j=0; j<n; j++) if(i&(1<<j)) for(int k=0; k<m; k++) f[k][j] = 1-f[k][j];
      for(int j=0; j<m; j++){
	int l=0;
	for(int k=0; k<n; k++) l+=f[j][k];
	if(l<=n/2) l = n-l;
	x+=l;
      }
      if(ans<x) ans = x;
      for(int j=0; j<n; j++) if(i&(1<<j)) for(int k=0; k<m; k++) f[k][j] = 1-f[k][j];
    }
    cout <<ans<<endl;
  }
  return 0;
}