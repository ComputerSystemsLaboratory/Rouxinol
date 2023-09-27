#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  while(1){
    int h;
    cin >> h;
    if(h==0) break;

    vector<vector<int> > board(h, vector<int>(5, 0));
    for(int i=0; i<h; i++){
      for(int j=0; j<5; j++){
        cin >> board[i][j];
      }
    }

    int point=0;
    bool flag = true;
    while(flag){
      
      flag = false;
      //disappear
      for(int i=0; i<h; i++){
        for(int j=0; j<3; j++){
          int col = board[i][j];
          int cnt = 1;
          if(col==0) continue;
          while(j+cnt<5 && col==board[i][j+cnt]){
            cnt++;
          }
          if(cnt<3) continue;
          for(int k=0; k<cnt; k++){
            board[i][j+k] = 0;
          }
          point += col*cnt;
          flag = true;
        }
      }
      
      //fall
      for(int i=0; i<5; i++){
        for(int j=0; j<h; j++){
          for(int k=h-1; k>j; k--){
            if(board[k][i]==0){
              swap(board[k-1][i], board[k][i]);
            }
          }
        }
      }
      
    }
    cout << point << endl;
  }
  return 0;
}