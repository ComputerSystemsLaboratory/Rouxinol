#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int INF=99999999;
int N;
int a[45],b[45],c[45];
int d[10][10];
int m;
void print(){
  for(int i=0;i<=m;i++){
    for(int j=0;j<=m;j++){
      printf("%d ",d[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
int main(){
  while(1){
    m=0;
    scanf("%d",&N);
    if(N==0)break;
    for(int i=0;i<N;i++){
      scanf("%d %d %d",&a[i],&b[i],&c[i]);
      a[i];b[i];
      m=max(m,b[i]);
    }
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
	if(i==j)d[i][j]=0;
	else d[i][j]=INF;
      }
    }
    for(int i=0;i<N;i++){
      d[a[i]][b[i]]=min(d[a[i]][b[i]],c[i]);
      d[b[i]][a[i]]=min(d[b[i]][a[i]],c[i]);
    }
    for(int k=0;k<=m;k++){
      for(int j=0;j<=m;j++){
	for(int i=0;i<=m;i++){
	  d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
	}
      }
    }
    int x,ans=INF;
    for(int i=0;i<=m;i++){
      int sum=0;
      for(int j=0;j<=m;j++){
	if(d[i][j]!=INF && d[i][j]!=0)sum+=d[i][j];
      }
      if(ans>sum){ans=sum;x=i;}
    }
    printf("%d %d\n",x,ans);
  }
  return 0;
}