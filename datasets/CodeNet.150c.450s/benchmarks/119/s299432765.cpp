#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
typedef pair<int, int> P;

int main(void){
  int w, h;
  int num=0;
  int map[51][51];
  int dir[8][2]={{1,0},{1,1},{1,-1},{0,1},{0,-1}, {-1,0},{-1,1},{-1,-1}};
  queue<P> que;
  cin >> w >> h;
  while(w+h){
    //input
    for (size_t y = 0; y < h; y++) {
      for (size_t x = 0; x < w; x++) {
        cin >> map[y][x];
      }
    }

    //output
    for (size_t y = 0; y < h; y++) {
      for (size_t x = 0; x < w; x++) {
        if (map[y][x]==1) {
          //search islands & added que & replace 0
          que.push(P(y, x));
          map[y][x]=0;
          while(que.size()){
            P p = que.front(); que.pop();
            for (size_t i = 0; i < 8; i++) {
              if (0<=p.first+dir[i][0] && p.first+dir[i][0]<h &&
              0<=p.second+dir[i][1] && p.second+dir[i][1]<w) {
                if(map[ p.first+dir[i][0] ][ p.second+dir[i][1] ]==1){
                  //added que & replace 0
                  que.push(P(p.first+dir[i][0], p.second+dir[i][1]));
                  map[ p.first+dir[i][0] ][ p.second+dir[i][1] ]=0;
                }
              }
            }
          }
          num+=1;
        }
      }
    }
    cout << num << endl;
    cin >> w >> h;
    num=0;
  }
  return 0;
}

