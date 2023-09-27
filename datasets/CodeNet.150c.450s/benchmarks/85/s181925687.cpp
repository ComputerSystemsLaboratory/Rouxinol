#include <stdio.h>
#include <stdlib.h>
#define N 100

int order(int, int *);

int main(){

  int i;
  int n, p[N + 1];

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d%d", &p[i], &p[i + 1]);
  }

  //for(i = 0; i <= n; i++) printf("%d\n", p[i]);

  printf("%d\n", order(n, p));

  return 0;
}

int order(int n, int *p){

  int i, j, k;
  int t, q, m;
  int a[N][N];

  for(i = 1; i <= n; i++){
    a[i][i] = 0;
  }

  for(i = 2; i <= n; i++){
    for(j = 1; j <= n - i + 1; j++){
      t = i + j - 1;
      a[j][t] = 114514;
      for(k = j; k < t; k++){
	q = a[j][k] + a[k + 1][t] + p[j - 1] * p[k] * p[t];
	if(j == k) m = q;
	  else if(m > q) m = q;
      }
      a[j][t] = m;
    }
  }
  
  return a[1][n]; 
}