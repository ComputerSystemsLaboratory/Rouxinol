#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int bord[11][5];
int H;
void solve(){
  int score = 0;
  int comboStart;
  int comboEnd;
  int tmp;
  bool combo ;

  while(true){
    //combo_check
    // cout << endl << "score =" << score << endl;
    // for(int height = H-1 ;height >= 0 ; height--){
    //   for(int width = 0; width < 5; width++){
    //     cout << bord[height][width] << " ";
    //   }
    //   cout << endl;
    // }
    combo = false;
    for(int height = H - 1 ;height >= 0 ; height--){
      for(int width = 2; width < 5; width++){
        if(bord[height][width-2] == bord[height][width-1] && bord[height][width-1] ==  bord[height][width] && bord[height][width] != -1 &&bord[height][width] != 0){
          combo = true;
          //combo 長さ確認
          comboStart = width - 2;
          comboEnd = width;
          while(true){//combo 長さ決定
            if(comboEnd+1 < 5 && bord[height][comboEnd] == bord[height][comboEnd+1]){
              comboEnd++;
            }else{
              break;
            }
          }

          score += bord[height][comboStart] * (comboEnd - comboStart + 1);
          for(int w = comboStart; w <= comboEnd; w++) bord[height][w] = -1;
        }
      }
    }
    if(!combo) break; //これ以上コンボが無いなら終了

    //コンボしたブロックをずらす
    for(int height = 0 ;height < H ; height++){
      for(int width = 0; width < 5; width++){
        if(bord[height][width] == -1){
          for(int h = height ; h < H; h++){
            bord[h][width] = bord[h+1][width];
          }
          height -- ;
        }
      }
    }
  }
  cout << score << endl;
  for(int height = 0 ;height < 11 ; height++){
    for(int width = 0; width < 5; width++){
      bord[height][width] = 0;
    }
  }
}

int main(){
  while(true){
    cin >> H;
    if(H == 0)break;
    for(int height = H - 1 ;height >= 0 ; height--){
      for(int width = 0; width < 5; width++){
        cin >> bord[height][width];
      }
    }
    solve();
  }
  return 0;
}

