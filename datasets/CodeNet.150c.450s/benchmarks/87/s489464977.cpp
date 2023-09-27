#include <bits/stdc++.h>
using namespace std;

int f[10][5];


int main(void){
  int H;
  while(cin >> H, H){
    int score = 0;
    for(int i=0; i < H; i++){
      for(int j=0; j < 5; j++){
        cin >> f[i][j];
      }
    }
    while(1){
      bool noch = true;
      for(int p=0; p < H; p++){
        for(int q=0; q < 5; q++){
          int flg = 0;
          int cnt = 0;
          int st;
          for(int r=q+1; r < 5; r++){
            if(f[p][q] != f[p][r])
              break;
            if(f[p][q] == f[p][r] && r-q >= 2){
              flg = f[p][q];
              cnt = r-q+1;
              st = q;
            }
          }
          if(flg){
            for(int i=q; i < q+cnt; i++){
              f[p][i] = 0;
            }
            noch = false;
            score += cnt * flg;
          }
        }
      }
      for(int p=H-1; p > 0; p--){
        for(int q=0; q < 5; q++){
          if(f[p][q] == 0){
            for(int r=p-1; r >= 0; r--){
              if(f[r][q] != 0){
                f[p][q] = f[r][q];
                f[r][q] = 0;
                break;
              }
            }
          }
        }
      }

      if(noch) break;
    }
    cout << score << endl;
  }
  return 0;
}