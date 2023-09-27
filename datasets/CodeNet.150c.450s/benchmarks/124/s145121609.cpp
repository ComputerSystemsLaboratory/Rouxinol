#include <stdio.h>
#define MAX 100
static const int INFTY = (1<<21);
int n,A[MAX][MAX];

void dikusutora();

int main(){
  int i,j,m,k,d,h;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=INFTY;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d",&m);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&d);
      scanf("%d",&h);
      A[m][d]=h;
    }
  }
  dikusutora();
  return 0;
}
void dikusutora(){
  int min,i,e,v;
  int g[MAX],a[MAX];

  for(i=0;i<n;i++){
    g[i]=INFTY;
    a[i]=0;
  }
  g[0]=0;
  a[0]=1;
  
  while(1){
    min=INFTY;
    e=-1;
    for(i=0;i<n;i++){
      if(min>g[i]&&a[i]!=2){
	e=i;
	min=g[i];
      }
    }
    if(e==-1)
      break;
    a[e]=2;
    for(v=0;v<n;v++){
      if(a[v]!=2&&A[e][v]!=INFTY){
	if(g[v]>g[e]+A[e][v]){
	  g[v]=g[e]+A[e][v];
	  a[v]=1;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d",i);
    printf(" ");
    if(g[i]==INFTY)
      printf("-1");
    else printf("%d",g[i]);
    printf("\n");
  }
}

