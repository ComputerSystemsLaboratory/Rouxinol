#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n;
  while(cin >>n,n){
    long long int d[10][10];
    int m=0;
    for(int i=0; i<10; i++){
      for(int j=0; j<10; j++){
	if(i == j) d[i][j] = 0;
	else d[i][j] = 1000000000;
      }
    }
    for(int i=0,a,b,c; i<n; i++){
      cin >>a>>b>>c;
      d[a][b] = c;
      d[b][a] = c;
      m = max(m,max(a,b));
    }
    for(int k=0; k<=m; k++) for(int i=0; i<=m; i++) for(int j=0; j<=m; j++) d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
    long long int ans,cost=-1;
    for(int i=0,t; i<=m; i++){
      t = 0;
      for(int j=0; j<=m; j++) t+=d[i][j];
      if(cost>t || cost == -1){cost = t;ans = i;}
    }
    cout <<ans<<" "<<cost<<endl;
  }
  return 0;
}