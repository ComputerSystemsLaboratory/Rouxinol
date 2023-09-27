#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <utility>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <climits>
#include <set>
#include <cmath>
#include <numeric>
#include <iomanip>

using namespace std;
int grid[10][5];
int tmp_col[10];
/*
void show(int H){
  for(int i = 0; i < H; i++){
    for(int j = 0; j < 5; j++){
      cout << grid[i][j];
    }
    cout << endl;
  }
  return;
}
*/
int main(void){
  while(true){
    int H;
    cin >> H;
    if(H == 0){
      break;
    }
    for(int i = 0; i < H; i++){
      for(int j = 0; j < 5; j++){
        cin >> grid[H - i - 1][j];
      }
    }
    int score = 0;
    while(true){
      bool updated = false;
      for(int i = 0; i < H; i++){
        int range_begin = -1;
        int range_color = -1;
        for(int j = 0; j < 5; j++){
          if(range_color != grid[i][j]){
            if(j - range_begin >= 3 && range_color > 0){
              updated = true;
              for(int k = range_begin; k < j; k++){
                score += grid[i][k];
                grid[i][k] = 0;
              }
            }
            range_begin = j;
            range_color = grid[i][j];
          }
        }
        if(5 - range_begin >= 3 && range_color > 0){
          updated = true;
          for(int k = range_begin; k < 5; k++){
            score += grid[i][k];
            grid[i][k] = 0;
          }
        }
      }
      if(!updated){
        break;
      }

      for(int i = 0; i < 5; i++){
        int real_height = 0;
        for(int j = 0; j < H; j++){
          if(grid[j][i] != 0){
            tmp_col[real_height] = grid[j][i];
            real_height ++;
          }
        }
        for(int j = 0; j < H; j++){
          grid[j][i] = 0;
        }
        for(int j = 0; j < real_height; j++){
          grid[j][i] = tmp_col[j];
        }
      }
    }
    cout << score << endl;
  }
  return 0;
}

