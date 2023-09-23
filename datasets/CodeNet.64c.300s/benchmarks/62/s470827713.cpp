#include<cstdio>

int main(){
  int n, m, i, j, key, c;
  scanf("%d %d", &n, &m);
  int a[n][m], b[m][1];
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(i = 0; i < m; i++){
    for(j = 0; j < 1; j++){
      scanf("%d", &b[i][j]);
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < 1; j++){
      c = 0;
      for(key = 0; key < m; key++){
        c = c + a[i][key] * b[key][j];
      }
      printf("%d",c);
    }
    printf("\n");/*それぞれ１行に出力*/
  }
  return 0;
}

