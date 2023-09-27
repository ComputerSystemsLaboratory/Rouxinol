#include<bits/stdc++.h>
using namespace std;
int main(){
  int H;
  char mas[10][5];
  while( cin >> H, H){
    for(int i = 0; i < H; i++){
      for(int j = 0; j < 5; j++){
        cin >> mas[i][j];
      }
    }

    int ret = 0;
    bool changed = true;

    for(int foo = 0; foo < 100; foo++){
      
      for(int q = 0; q < 30; q++){
        for(int i = H - 1; i > 0; i--){
          for(int j = 0; j < 5; j++){
            if(mas[i][j] == '*'){
              swap(mas[i][j],mas[i - 1][j]); //上から持ってくる
            }
          }
        }
      }

      for(int i = 0; i < H; i++){
        char prev = mas[i][0];
        int cnt = 0;
        for(int j = 0; j < 5; j++){
          if(mas[i][j] == '*'){
            cnt = 0;
            continue;
          }
          if(mas[i][j] != prev){
            prev = mas[i][j];
            cnt = 0;
          }
          cnt++;
          if(cnt == 3){
            ret += (mas[i][j] - '0') * 3;
            for(int k = j, l = 0; l < cnt; l++, k--){
              mas[i][k] = '*';
            }
          } else if(cnt > 3){
            ret += (mas[i][j] - '0');
            mas[i][j] = '*';
          }
        }
      }
    }
    cout << ret << endl;
  }
}