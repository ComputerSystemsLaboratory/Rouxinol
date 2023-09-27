#include <cstdio>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int H, M, N;

int go[4][2];

bool K[1002][1002];

int score[1002][1002];

int C[11][2];

int ans = 0;

void saiki(int sx, int sy, int s){
  if(K[sx][sy]){
    if(score[sx][sy] > s){
      score[sx][sy] = s;
      for(int i = 0; i < 4; i++){
        saiki(sx + go[i][0], sy + go[i][1], s + 1);
      }
    }
  }
}

int main(){
  
  go[0][0] = 1;
  go[0][1] = 0;
  go[1][0] = 0;
  go[1][1] = -1;
  go[2][0] = -1;
  go[2][1] = 0;
  go[3][0] = 0;
  go[3][1] = 1;
  
  for(int i = 0; i <= H + 1; i++){
    for(int j = 0; j <= M + 1; j++){
      score[i][j] = 2147483640;
      K[i][j] = false;
    }
  }
  
  scanf("%d%d%d", &H, &M, &N);
  
  for(int i = 0; i < H; i++){
    char str[M + 1];
    scanf("%s", str);
    for(int j = 0; j < M; j++){
      if(str[j] == '.'){
        K[i + 1][j + 1] = true;
      }else if(str[j] == 'X'){
        K[i + 1][j + 1] = false;
      }else if(str[j] == 'S'){
        C[0][0] = i + 1;
        C[0][1] = j + 1;
        K[i + 1][j + 1] = true;
      }else{
        C[str[j] - '0'][0] = i + 1;
        C[str[j] - '0'][1] = j + 1;
        K[i + 1][j + 1] = true;
      }
    }
  }
  
  for(int i = 0; i < N; i += 2){
    for(int j = 1; j <= H; j++){
      for(int k = 1; k <= M; k++){
        if(K[j][k]){
          score[j][k] = 2147483640;
        }else{
          score[j][k] = -2147483640;
        }
      }
    }
    saiki(C[i + 1][0], C[i + 1][1], 0);
    int aa = score[C[i][0]][C[i][1]];
    int bb;
    if(i + 2 < N){
      bb = score[C[i + 2][0]][C[i + 2][1]];
      ans += bb;
    }
    ans += aa;
  }
  
  printf("%d\n", ans);
  
  return 0;
}