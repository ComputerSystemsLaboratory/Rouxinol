#include <iostream>
#include <vector>
using namespace std;

int w, h;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

void bfs(vector< vector<char> > &plane, int x, int y, int &ans){  
  plane[x][y] = '#';
  ans++;
  for(int i=0; i<4; i++){
    if(0 <= x+dx[i] && x+dx[i] < w && 0 <= y+dy[i] && y+dy[i] < h)
      if(plane[x + dx[i]][y + dy[i]] != '#')
        bfs(plane, x + dx[i], y + dy[i], ans);
  }
  
  return;
}

int main(){
  while(true){
    cin >> w >> h;
    if(w == 0)
      break;

    int sx, sy;
    vector< vector<char> > plane(w, vector<char>(h));
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        cin >> plane[j][i];
        if(plane[j][i] == '@'){
          sx = j;
          sy = i;
        }
      }
    }

    int ans = 0;
    bfs(plane, sx, sy, ans);
    cout << ans << endl;
  }
  
  return 0;
}