#include <iostream>
#include <vector>
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, s, n) for(int i = s; i < n; i++)
#define repr(i, n) for(int i = n-1; i >= 0; i--)
#define repr2(i, s, n) for(int i = n-1; i >= s; i--)
using namespace std;

int main(){
  while(1){
    int h;
    cin >> h;
    if(h == 0) break;
    vector<vector<int>> board(h, vector<int>(5));
    rep(i, h)rep(j, 5) cin >> board[i][j];
    int score = 0;
    bool flag;
    while(1){
      flag = true;
      // 消滅させる
      rep(i, h){
        int count;
        int prev = -1;
        int now;
        rep(j, 5){
          now = board[i][j];
          if (now == 0) count = 0;
          else if (now != prev) count = 1;
          else count++;
          if (count == 3){
            flag = false; // 一回でも消滅したらもう一度判定する
            score += now * 3;
            board[i][j] = board[i][j-1] = board[i][j-2] = 0;
          }
          else if (count > 3){
            score += now;
            board[i][j] = 0;
          }
          prev = now;
        }
      }
      // 消滅しなかったら終わり
      if (flag) break;
      
      // 消滅した分、下に下げる
      rep(k, h-1)repr2(i, k+1, h)rep(j, 5){
        if (board[i][j] == 0){
          board[i][j] = board[i-1][j];
          board[i-1][j] = 0;
        }
      }
    }
    cout << score << endl;
  }
  
  return 0;
}
