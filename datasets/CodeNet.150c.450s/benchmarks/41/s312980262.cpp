#include<bits/stdc++.h>
using namespace std;
static const int MAX=100;
static const long long INF=(1LL<<32);
int main()
{
  int e,u,v,c;
  int n;
  long long d[MAX][MAX];
  scanf("%d %d",&n,&e);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      d[i][j]=((i==j)?0:INF);
    }
  }
  for(int i=0;i<e;i++){
    scanf("%d %d %d",&u,&v,&c);
    d[u][v]=c;
  }
  for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
      if(d[i][k]==INF) continue;
      for(int j=0;j<n;j++){
	if(d[k][j]==INF) continue;
	d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
      }
    }
  }
  int judge=0;
  for(int i=0;i<n;i++) if(d[i][i]<0) judge=1;
  if(judge) printf("NEGATIVE CYCLE\n");
  else{
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	if(j) printf(" ");
	if(d[i][j]==INF) printf("INF");
	else printf("%d",d[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}
	

