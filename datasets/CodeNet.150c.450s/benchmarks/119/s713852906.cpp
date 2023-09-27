#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector< vector<int> > map( 51 ,vector<int>(51,0));
int h,w;

void serch_island(int x,int y){
  map[y][x] = 0;
  const int dirX[] = {1 ,0, -1,  0, 1 , 1 , -1, -1};
  const int dirY[] = {0 ,1,  0, -1, 1 ,-1 ,  1, -1};
    for(int dir = 0; dir < 8; dir++){
      int nx = x + dirX[dir];
      int ny = y + dirY[dir];
      /*
      for(int i = 0; i < h ; i++){
        for(int j = 0; j < w; j++){
          cout << map[i][j] ;
        }
        cout << endl;
      }
      cout << endl;//*/
      if(nx >= 0 && nx < w &&
         ny >= 0 && ny < h &&
         map[ny][nx] == 1){
        serch_island(nx,ny);
      }
    }
    return ;
}

void solve(){
  int island = 0;

  for(int i = 0; i < h ; i++){
    for(int j = 0; j < w; j++){
      if(map[i][j] == 1){
        island++;
        serch_island(j, i);
      }
    }
  }
  cout << island << endl;
  map.clear();
  return ;
}
int main(){
  while(true){
    cin >> w >> h;
    if(h + w == 0) break;
    for(int i = 0; i < h ; i++){
      for(int j = 0; j < w; j++){
        cin >> map[i][j];
      }
    }
    solve();
  }
  return 0;
}

