#include<iostream>
using namespace std;
const int MAXW = 51;
const int MAXH = 51;
int map[MAXW][MAXH];
int w,h;
int dx[] = {-1,0,1,-1,1,-1,0,1};
int dy[] = {1,1,1,0,0,-1,-1,-1};
int dfs(int x,int y){
  if(map[x][y] == 0)return 0;
  map[x][y] = 0;
  for(int i = 0;i < 9;i++){
    int nx = x+dx[i];
    int ny = y+dy[i];
    if(nx >= 0 && nx < w & ny >= 0 && ny < h)
      dfs(nx,ny);
  }
  return 1;
}

int main(){
  while(true){
    cin >> w >> h;
    if(w == 0 && h == 0)break;
    for(int i = 0;i < h;i++){
      for(int j = 0;j < w;j++){
        cin >> map[j][i];
      }
    }
    int count = 0;
    for(int i = 0;i < h;i++){
      for(int j = 0;j < w;j++){
        count += dfs(j,i);
      }
    }
    cout << count << endl;
  }
}