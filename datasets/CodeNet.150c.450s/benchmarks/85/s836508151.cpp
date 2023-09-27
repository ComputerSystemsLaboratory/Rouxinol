#include<stdio.h>
#include<algorithm>
using namespace std;

#define N 100

int main(){

  int n, p[N + 1], m[N + 1][N + 1];
  int i, j, k, l;
  
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++){
    scanf("%d", &p[i - 1]);
    scanf("%d", &p[i]);
  }
  
  for(i = 0; i <= n; i++){
    m[i][i] = 0;
  }
  
  for(l = 2; l <= n; l++){
    for(i = 1; i <= n - l + 1; i++){
      int j = i + l - 1;
      m[i][j] = (1 << 21);
      
      for(k = i; k <= j - 1; k++){
        m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1]*p[k]*p[j]);
      }
    }
  }
  
  printf("%d\n", m[1][n]);
  
  return 0;
}