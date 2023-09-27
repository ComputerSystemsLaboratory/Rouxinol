#include <stdio.h>

#define MAX 101
#define INF 100000
#define FLAG 1
#define DEFLAG 0

int main(){
  int i,j,n,min,a[MAX][MAX],k,x[MAX],minNode,sum=0,g[MAX];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }

  //calc
  k = 1;
  x[0] = 0;
  g[0] = FLAG;
  for(i=1;i<n;i++){
    g[i] = DEFLAG;
  }
  
  while(1){
    min = INF;
    
    for(i=0;i<k;i++){
      for(j=0;j<n;j++){
	if(min > a[x[i]][j] && a[x[i]][j]!= -1 && g[j] != FLAG){
	  min = a[x[i]][j];
	  minNode = j;
	}
      }
    }

    if(k!=n){
      x[k] = minNode;
      g[minNode] = FLAG;
      k++;
      sum += min;
    }else{ break; }
    
  }

  printf("%d\n",sum);
  
  return 0;
}