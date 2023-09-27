#include <iostream>
#include <vector>
using namespace std;

int w, h;
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1,}, dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

void dfs(vector< vector<int> > &plane, int x, int y){
  plane[x][y] = 0;
  for(int i=0; i<8; i++){
    if(0 <= x+dx[i] && x+dx[i] < h && 0 <= y+dy[i] && y+dy[i] < w)
      if(plane[x + dx[i]][y + dy[i]] == 1)
        dfs(plane, x + dx[i], y + dy[i]);
  }

  return;
}

int main(){
  while(true){
    cin >> w >> h;
    if(w == 0)
      break;

    vector< vector<int> > plane(h, vector<int>(w));
    for(int i=0; i<h; i++)
      for(int j=0; j< w; j++)
        cin >> plane[i][j];

    int ans = 0;
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        if(plane[i][j] == 1){
          dfs(plane, i, j);
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}