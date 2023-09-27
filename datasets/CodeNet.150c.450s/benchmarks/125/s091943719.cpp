#include <stdio.h>
#define MAX 101

int n, ni = 1;
int A[MAX][MAX] = {0}, a[MAX] = {0}, b[MAX] = {0};

void serch(int x){
  int i;
  
  a[x] = ni++;
  for(i=1; i<=n; i++){
    if(a[i] == 0 && A[x][i] == 1)
      serch(i);
  }
  b[x] = ni++;
}

int main(){
  int i, j, k, x, y;
  
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    scanf("%d%d", &x, &k);
    for(j=1; j<=k; j++){
      scanf("%d", &y);
      A[x][y] = 1;
    }
  }
 
  for(i=1; i<=n; i++){
    if(a[i] == 0)
      serch(i);
  }
  
  for(i=1; i<=n; i++){
    printf("%d %d %d\n", i, a[i], b[i]);
  }
 
  return 0;
}