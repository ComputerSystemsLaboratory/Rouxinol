#include <stdio.h>

int  main(){
  int i, j, k, n, x, y;
  int ans[101][101];
  
  scanf("%d", &n);
  
  for(i=0; i<n; i++){
    for(j=0; j<n; j++)
      ans[i][j] = 0;
  }
  
  for(i=0; i<n; i++){
    scanf("%d %d", &x, &y);
    for(j=0; j<y; j++){
      scanf("%d", &k);
      ans[i][k-1] = 1;
    }
  }
  
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(j>0)
        printf(" ");
      printf("%d", ans[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
      