#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <memory>
#include <cstring>
#include <cassert>
#include <numeric>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cctype>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define REP2(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define REP(i, n) REP2(i, 0, n)
#define ALL(S) (S).begin(), (S).end()
typedef long long ll;

int main(){
  ios::sync_with_stdio(false);

  int H;
  while (cin >> H && H){

    int board[H][5];
    REP(i, H){
      REP(j, 5) cin >> board[i][j];
    }


    int  score  = 0;
    bool update = true;

    
    while (update){
      update = false;
      int next_board[H][5];
      memcpy(next_board, board, sizeof(board));
      
      // REP(i, H){
      //   REP(j, 5) cout << board[i][j] << " " ;
      //   cout << endl;
      // }
      // cout << endl;

      REP(i, H) REP(r, 6) REP(l, r) if (r - l >= 3 && board[i][l] >= 0){
        bool same = true;
        int value = board[i][l];
        REP2(k, l, r) if (board[i][k] != value) same = false;
        
        REP2(k, l, r) if (same){
          next_board[i][k] = -1;
        }
      }
      
      REP(i, H) REP(j, 5) if (board[i][j] != next_board[i][j]){
        update = true;
      }

      if (update){
        REP(i, H) REP(j, 5){
          if (board[i][j] >= 0 && next_board[i][j] == -1){
            score += board[i][j];
          }
          board[i][j] = next_board[i][j];
        }
        
        bool has_drop = true;
        while (has_drop){
          has_drop = false;
          
          REP(i, H - 1) REP(j, 5) if (board[i + 1][j] == -1 && board[i][j] >= 0){
            has_drop = true;
            swap(board[i + 1][j], board[i][j]);
          }
        }
      }
    }
    cout << score << endl;
    
    
  }
  
  return 0;
}