#include <iostream>
#include <cstring>

using namespace std;

int nextInt() { int d; cin >> d; return d;}

bool fall(int field[][5], int H) {
  bool isFalledRet = false;
  
  for (int y = H - 1; y >= 0; y--) {
    for (int x = 0; x < 5; x++) {
      if (field[y][x] != 0) {
        int i;
        bool isFalled = false;
        for (i = y + 1; i < H; i++) {
          if (field[i][x] != 0) {
            break;
          }
          isFalled = true;
        }
        if (isFalled) {
          field[i - 1][x] = field[y][x];
          field[y][x] = 0;
          isFalledRet = true;
        }
      }
    }
  }
  
  return isFalledRet;
}

int dfs(int field[][5], int H) {
  // テヲツーツエテ・ツケツウテ」ツ?ォ3テ」ツ?、テゥツ?」テァツカツ堙」ツ?療」ツ?ヲテ」ツつ凝」ツつづ」ツ?ョテ」ツつ津ヲツ篠「テ」ツ??
  int score = 0;
  for (int y = 0; y < H; y++) {
    for (int x = 0; x < 3; x++) {
      if (x < 1) {
        if (field[y][0] != 0 && field[y][0] == field[y][1] && field[y][1] == field[y][2] &&
              field[y][2] == field[y][3] && field[y][3] == field[y][4]) {
          score += 5 * field[y][0];
          field[y][0] = 0;
          field[y][1] = 0;
          field[y][2] = 0;
          field[y][3] = 0;
          field[y][4] = 0;        
        }  
      }
      if (x < 2) {
        if (field[y][x] != 0 && field[y][x] == field[y][x + 1] && field[y][x + 1] == field[y][x + 2] && field[y][x + 2] == field[y][x + 3]) {
          score += 4 * field[y][x];
          field[y][x]     = 0;
          field[y][x + 1] = 0;
          field[y][x + 2] = 0;
          field[y][x + 3] = 0;
        }
      }     
      if (field[y][x] != 0 && field[y][x] == field[y][x + 1] && field[y][x + 1] == field[y][x + 2]) {
        score += 3 * field[y][x];
        field[y][x]     = 0;
        field[y][x + 1] = 0;
        field[y][x + 2] = 0;
      }
    }  
  }
  
  bool isFalled = fall(field, H);
  if (!isFalled) {
    return score;
  }
  
  int dfsScore = dfs(field, H);
  score += dfsScore;
  return score;
}

int main() {
  while (true) {
    int H = nextInt();
    if (H == 0) {
      break;
    }
    
    int field[H][5];
    memset(field, 0, sizeof(field));
    
    for (int y = 0; y < H; y++) {
      for (int x = 0; x < 5; x++) {
        int d = nextInt();
        field[y][x] = d;
      }
    }
    int ans = dfs(field, H);
    cout << ans << endl;
  }

  return 0;
}