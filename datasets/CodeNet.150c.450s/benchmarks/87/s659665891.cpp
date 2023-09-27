#include <iostream>
#include <vector>
#include <queue>

using namespace std;
bool check[4][4];
int ban[20][5];
int H;
bool flag;
int score;

/*
bool calc() {
  int start, end;
  bool flag = false;
  for(int i = 0; i < H; i++) {
    int len = 1;
    int prev = 0;
    int digit = 0;
    for(int j = 0; j < 5; j++) {
      if(prev == ban[i][j] && ban[i][j] != 0){
        if(len == 3) {
          start = j - 3;
          digit = ban[i][j];
        }
        len++;

      }else {
        if(len >= 3) end = j - 1;
        prev = ban[i][j];
        len = 1;
      }
    }
    if(prev == ban[i][4] && len >= 3){
      end = 4;
    }
    cout << digit << endl;
    if(digit != 0){
      flag = true;
      for(int j = 0; j < 5; j++) {
        if(j >= start && j <= end) ban[i][j] = 0;
      }
      score += (end - start + 1) * digit;
    }
  }
  return flag;
}
*/

  
bool calc()
{
  bool flag = false;
  for ( int i = 0; i < H; ++i ) {
    bool h[4][4] = {false};
    for ( int j = 0;j < 4; ++j ) {
      h[0][j] = (ban[i][j] != 0) &&(ban[i][j] == ban[i][j + 1]);
    }

    for ( int j = 1; j < 4; ++j ) {
      for ( int k = 0; k < 4 - j; ++k ) {
        h[j][k] = h[j - 1][k] && (h[j - 1][k] == h[j - 1][k + 1]);
      }
    }

    for ( int j = 3;j >=1; --j ) {
      for ( int k = 0; k < 4 - j; ++k ) {
        if ( h[j][k] == true )
          {
            for ( int l = 0; l < j + 2; ++l ) {
              score += ban[i][l + k];
              ban[i][l + k] = 0;
            }
            flag = true;
            goto END;
          }
      }
    }
  END:;

  }
  return flag;
}



void koushin() {
  queue<int> que;
  for(int i = 0; i < 5; i++) {
    for(int j = H - 1; j >= 0; j--) {
      if(ban[j][i] == 0) continue;
      que.push(ban[j][i]);
    }
    
    for(int j = H - 1; j >= 0; j--) {
      if(que.empty()) ban[j][i] = 0;
      else {
        ban[j][i] = que.front(); que.pop();
      }
    }
  }
}

void printban() {
  for(int i = 0; i < H; i++) {
    for(int j = 0; j < 5 ;j++) {
      cout << " " << ban[i][j];
    }
    cout << endl;
  }
  cout << endl;
}

int main() {
  while(cin >> H && H != 0) {
    score = 0;
    for(int i = 0; i < H; i++) {
      for(int j = 0; j < 5; j++) {
        cin >> ban[i][j];
      }
    }
    while(true) { 
      if(calc() == false){
        // printban();
        break;
      }
      else {
        koushin();
        // printban();
      }
    }
    for(int i = 0; i < H; i++) {
      for(int j = 0; j < 5; j++) {
        ban[i][j] = 0;
      }
    }
    
    cout << score << endl;
  }
}