#include <stdio.h>
#define MAX 101

int A[MAX][MAX], s[MAX], h[MAX];

void serch(int x, int y){
  int i;
  h[x] = y;
  for(i=1; i<=s[x]; i++){
    if(h[A[x][i]] > y)
      serch(A[x][i], y+1);
  }
}

int main(){
  int i, j, k, n;
  
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    h[i] = 10000;
    for(j=1; j<=n; j++)
      A[i][j] = 0;
  }
  
  for(i=1; i<=n; i++){
    scanf("%d", &k);
    scanf("%d", &s[k]);
    for(j=1; j<=s[k]; j++)
      scanf("%d", &A[k][j]);
  }
  
  serch(1,0);
  
  for(i=1; i<=n; i++){
    if(h[i] == 10000)
      h[i] = -1;
    printf("%d %d\n", i, h[i]);
  }
  return 0;
}
  