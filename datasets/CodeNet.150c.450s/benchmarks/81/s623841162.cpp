#include<iostream>
using namespace std;
#define INF 100000000
int main(){
  int d[11][11];
  int n;
  while(cin>>n){
    if(n==0) break;
    int a,b,c;
    for(int i=0;i<=10;i++){
      for(int j=0;j<=10;j++) d[i][j] = INF;
    }
    for(int i=0;i<n;i++){
      cin >> a >> b >> c;
      d[a][b] = d[b][a] = c;
    }
    for(int k=0;k<=10;k++)
      for(int i=0;i<=10;i++)
	for(int j=0;j<=10;j++) d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
    /*for(int i=0;i<=10;i++){
      for(int j=0;j<=10;j++) cout << d[j][i] << ' ';
      cout << endl;
      }*/
    int s,ans = INF,ansi;
    for(int i=0;i<=10;i++){
      if(d[i][i]==INF) continue;
      s = 0;
      for(int j=0;j<=10;j++) if(i!=j&&d[i][j]!=INF) s += d[i][j];
      //cout << s << endl;
      if(s<ans){
	ans = s;
	ansi = i;
      }
    }
    cout << ansi << ' ' << ans << endl;
  }
  return 0;
}