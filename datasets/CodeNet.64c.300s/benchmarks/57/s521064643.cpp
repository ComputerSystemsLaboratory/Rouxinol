#include <stdio.h>
#include <algorithm>

int field[10][2][10000];
int h,w;
int row_sum;
int col_sum;
int sum = 0;
int now_sum = 0;
int ans[5];
int n = 0;
int sel[10];


void all(int k){
  if(k != h){
    sel[k] = 0;
    all(k+1);
    sel[k] = 1;
    all(k+1);
  }
  now_sum = 0;
  for(int j = 0; j < w; j++){
    col_sum = 0;
    for(int i = 0; i < h; i++){
      col_sum += field[i][sel[i]][j];
    }
    now_sum += std::max(col_sum,h-col_sum);
  }
  sum = std::max(now_sum,sum);
}

int solve(){
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      field[i][1][j] = (field[i][0][j] + 1) % 2;
    }
  }
  all(0);
  return sum;
}

int main(){
  while(true){
    scanf("%d %d",&h, &w);
    if(h == 0 && w == 0)
      break;
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        scanf("%d", &field[i][0][j]);
      }
    }
    ans[n++] = solve();
  }
  for(int i = 0; i < n; i++){
    printf("%d\n", ans[i]);
  }
  return 0;
}