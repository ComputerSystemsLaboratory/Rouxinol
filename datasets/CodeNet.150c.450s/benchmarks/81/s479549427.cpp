#include<bits/stdc++.h>
using namespace std;
#define INF (1<< 28)
#define SIZE 1000

int main(){
  int min_cost[SIZE][SIZE];
  int n,m,a,b,c,mins,minj,sum;
  cin >> m;
  while(m != 0){
    for(int i=0;i<=101;i++){
      for(int j=0;j<=101;j++){
	if(i == j) min_cost[i][j] = 0;
	else min_cost[i][j] = INF;
      }
    }
    n = 0;
    for(int i=0;i<m;i++){
      cin >> a >> b >> c;
      n = max(n,max(a,b));
      min_cost[a][b] = min_cost[b][a] = c;
    }
    for(int k=0;k<=n;k++){
      for(int i=0;i<=n;i++){
	for(int j=0;j<=n;j++){
	  min_cost[i][j] = min(min_cost[i][j],min_cost[i][k]+min_cost[k][j]);
	}
      }
    }
    mins = minj = INF; 
    for(int i=0;i<=n;i++){
      sum = 0;
      for(int j=0;j<=n;j++){
	sum += min_cost[i][j];
      }
      if(mins > sum){
	mins = sum;
	minj = i;
      }
    }
    cout << minj << ' ' << mins << endl;
    
    cin >> m;
  }
  
  return 0;
}