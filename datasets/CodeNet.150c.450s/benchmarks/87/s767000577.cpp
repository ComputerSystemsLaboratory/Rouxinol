#include <iostream>
#include <cstring>

using namespace std;

int H,puz[10][5];

int solve(){
  int res = 0;
  bool update = true;
  while(update){
    update = false;
    for(int i = 0 ; i < H ; i++){
      bool c[5] = {false},ok = false;
      int num = puz[i][0],cnt = 1;
      c[0] = true;
      for(int j = 1 ; j < 5 ; j++){
        if(num == puz[i][j] && puz[i][j] > 0){
          cnt++;
          c[j] = true;
          if(cnt >= 3) ok = true;
        }else if(puz[i][j] > 0){
          if(ok) break;
          num = puz[i][j];
          cnt = 1;
          memset(c,false,sizeof(c));
          c[j] = true;
        }else{
          cnt = 0;
        }
      }
      if(cnt >= 3){
        res += cnt*num;
        update = true;
        for(int j = 0 ; j < 5 ; j++){
          if(c[j]) puz[i][j] = -1;
        }
      }
    }
    if(update){
      int tmp[10][5];
      memset(tmp,0,sizeof(tmp));
      for(int j = 0 ; j < 5 ; j++){
        int idx = H-1;
        for(int i = H-1 ; i >= 0 ; i--){
          if(puz[i][j] == -1) continue;
          tmp[idx--][j] = puz[i][j];
        }
      }
      for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < 5 ; j++){
          puz[i][j] = tmp[i][j];
        }
      }
    }
  }
  return res;
}

int main(){
  while(cin >> H,H){
    for(int i = 0 ; i < H ; i++){
      for(int j = 0 ; j < 5 ; j++){
        cin >> puz[i][j];
      }
    }
    cout << solve() << endl;
  }
  return 0;
}