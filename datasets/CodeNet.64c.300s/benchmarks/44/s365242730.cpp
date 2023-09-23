#include<iostream>
#include<algorithm>
#include<cstring>
#define INF 11111111
using namespace std;

int main(){

  int a[100][100],ans,d,p;
  int n,m,t,u;

  while(cin >> n, n){
    
    for(int i=0;i<100;i++){
      for(int j=0;j<100;j++) a[i][j] = INF;
    }

    for(int i=0;i<n;i++){
      cin >> t >> u >> m;
      a[t][u] = a[u][t] = m;
    }

    for(int k=0;k<=10;k++){
      for(int i=0;i<=10;i++){
	for(int j=0;j<=10;j++) a[i][j] = min(a[i][j],a[i][k]+a[k][j]);
      }
    }

    ans = INF;

    for(int i=0;i<=10;i++){
      d = 0;

      for(int j=0;j<=10;j++){
	if(a[i][j] < INF && i != j) d += a[i][j];
      }

      if(ans > d && d){
	ans = d;
	p = i;
      }
    }

    cout << p << " " << ans << endl;
  }
}