#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <cmath>
using namespace std;

int H, score;
int board[10][5];

void printBoard(){
  cout << endl;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < 5; j++) cout << board[i][j] << " ";
    cout << endl;
  }
}

bool checkBoard(){
  bool flag = false;
  for(int i = 0; i < H; i++){
    int prev = board[i][0], head = 0, tail = 1;
    int ans_head = 0, ans_tail = 1;
    for(int j = 1; j < 5; j++){
      if(board[i][j] == prev && prev != 0) tail++;
      else{
        prev = board[i][j];
        head = j;
        tail = head + 1;
      }
      if(tail - head > ans_tail - ans_head){
        ans_head = head;
        ans_tail = tail;
      }
    }

    if(ans_tail - ans_head < 3) continue;
    score += board[i][ans_head] * (ans_tail - ans_head);
    flag = true;

    for(int j = i; j >= 1; j--){
      for(int s = ans_head; s < ans_tail; s++) board[j][s] = board[j-1][s];
    }

    for(int j = ans_head; j < ans_tail; j++) board[0][j] = 0;
  }

  return flag;
}

int main(void)
{
  while(cin >> H && H != 0){
    score = 0;
    for(int i = 0; i < H; i++){
      for(int j = 0; j < 5; j++) cin >> board[i][j];
    }
    while(checkBoard());
    cout << score << endl;
  }
  return 0;
}