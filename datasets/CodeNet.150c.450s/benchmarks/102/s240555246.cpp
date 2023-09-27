#include <iostream>
#include <queue>
using namespace std;
typedef struct P{
  int first;
  int second;
} PAIR;

int main(void){
  int w, h, sx, sy, x, y, i,ans;
  char mp[22][22];
  bool visited[22][22];
  queue<PAIR> que;
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  PAIR next, tmp;

  while(1){
    cin >> w >> h;
    if(w == 0) break;
    for(y=0;y<h+2;y++){
      if(y == 0 || y == h + 1){
        for(x=0;x<w+2;x++) mp[y][x] = '#';
      }else{
        for(x=0;x<w+2;x++){
          if(x == 0 || x == w + 1){
            mp[y][x] = '#';
          }else{
            cin >> mp[y][x];
          }
        }
      }
    }
    for(y=0;y<h+2;y++){
      for(x=0;x<w+2;x++){
        if(mp[y][x] == '@'){
          sx = x;
          sy = y;
        }
        visited[y][x] = false;
      }
    }
    que.push(PAIR{sx, sy});

    visited[sy][sx] = true;
    ans = 1;
    
    while(!que.empty()){
      next = que.front();
      que.pop();
      for(i=0;i<4;i++){
        if((!visited[next.second+dy[i]][next.first+dx[i]]) && (mp[next.second+dy[i]][next.first+dx[i]] == '.')){
          ans++;
          visited[next.second+dy[i]][next.first+dx[i]] = true;
          que.push(PAIR{next.first+dx[i], next.second+dy[i]});
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
