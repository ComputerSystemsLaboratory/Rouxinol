#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstring>

using namespace std;
typedef long long ll;
#define INF 2000000

ll graph[101][101],n;

void warshall_floyd(void);

int main(void){
  int u,k,v,c;

  cin >> n;

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      graph[i][j]=INF;

  for(int i=0;i<n;i++)graph[i][i]=0;

  for(int i=0;i<n;i++){
    cin >> u >> k;
    while(k--){
      cin >> v >> c;
      graph[u][v]=c;
    }
  }

  warshall_floyd();

  for(int i=0;i<n;i++)
    cout << i << " " << graph[0][i] << endl;
  
  return 0;
}

void warshall_floyd(void){
  for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
	graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
  
}