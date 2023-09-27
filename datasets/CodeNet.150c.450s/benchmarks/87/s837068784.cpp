#include <iostream>
#include <utility>
using namespace std;

int main(void){
  while(1){
    int H;
    int stone[10][5]; /* stone[???][?¨?] */

    int score = 0;

    cin >> H;
    if(H == 0){return 0;}

    for(int i = 0 ; i < H ; i++){
      for(int j = 0 ; j < 5 ; j++){
        cin >> stone[i][j];
      }
    }

    /* ?¶?????????¨??????????????? */
    bool flg = true;
    while(flg == true){

      flg = false;
      for(int i = 0 ; i < H ; i++ ){
        for(int j = 0 ; j < 3 ; j++){
          int count = 1;
          int tempcolor = stone[i][j];

          for(int k = 1 ; k + j < 5 ; k++){
            if(stone[i][j+k] == tempcolor && tempcolor != -1 && tempcolor != 0){
              count++;
            }else{
              break;
            }
          }

          if(count >= 3){
            score += tempcolor * count;

            for(int k = 0 ; k < count ; k++){
              stone[i][j+k] = -1;
              flg = true;
            }
          }

        }
      }

      /* ?¶??????????????????¨??? */


      for(int i = H-1 ; i >= 0 ; i-- ){
        for(int j = 0 ; j < 5 ; j++){
          while(stone[i][j] == -1){
            for(int k = i ; k > 0 ; k--){
              stone[k][j] = stone[k-1][j];
            }
           stone[0][j] = 0;
          }
        }
      }
    }
    cout << score << endl;
  }
}