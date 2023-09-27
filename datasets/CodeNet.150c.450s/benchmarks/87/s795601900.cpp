#include <iostream>
using namespace std;

int h, w = 5;
int t[10][5];

int checkAndDelete(int x, int y){
  int tx = x;
  while(tx < w && t[y][tx] == t[y][x]) tx++;
  if(tx - x < 3) return 0;

  int res = 0;
  for(int j = x; j < tx; j++){
    res += t[y][j];
    t[y][j] = 0;
  }
  return res;
}

void burokkuOtosu(){
  for(int i = h - 1; i >= 0; i--){
    for(int j = 0; j < w; j++){
      if(t[i][j] == 0) continue;

      int ti;
      for(ti = i + 1; ti < h; ti++){
        if(t[ti][j] != 0) break;
      }
      ti--;
      if(i != ti){
        t[ti][j] = t[i][j];
        t[i][j] = 0;
      }
    }
  }
}

void solve(){
  int res = 0;

  while(true){
    bool changeFlg = false;

    for(int i = h - 1; i >= 0; i--){
      for(int j = 0; j < 3; j++){
        if(t[i][j] == 0) continue;

        int tmp = checkAndDelete(j, i);
        res += tmp;
        if(tmp){
          changeFlg = true;
          break;
        }
      }
    }

    burokkuOtosu();

    if(!changeFlg) break;
  }

  cout << res << endl;
}

int main(){
  while(cin >> h, h){
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        cin >> t[i][j];
      }
    }
    solve();
  }
}