#include<stdio.h>
#define N 100
#define INF 9999999

int m[N][N], p[N], n;

void matrixChainOrder(){

  int i, j, k, l, q;

  for(i = 1 ; i <= n ; i++){
    m[i][i] = 0;
  }
  for(l = 2 ; l <= n ; l++){
    for(i = 1 ; i <= n - l + 1 ; i++){
      j = i + l -1;
      m[i][j] = INF;
      for(k = i ; k <= j-1 ; k++){
	q = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
	if(q < m[i][j]){
	  m[i][j] = q;
	}
      }
    }
  }
  
}

int main(){

  int  a, i;

  scanf("%d", &n);
  for(i = 0 ; i < n ; i++){
    scanf("%d%d", &p[i], &p[i+1]);
  }

  matrixChainOrder();
  
  printf("%d\n", m[1][n]);  

  return 0;
}