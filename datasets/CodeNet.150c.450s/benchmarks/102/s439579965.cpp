#include <iostream>
#include <vector>
using namespace std;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int dfs(int x, int y, vector<vector<bool> >& canGo){
  if(!canGo[x][y]){ return 0; }

  int ans = 1;
  canGo[x][y] = false;
  for(int i = 0; i < 4; i++)
    ans += dfs(x + dx[i], y + dy[i], canGo);
  
  return ans;
}

int main(void){
  while(true){
    int w, h;
    cin >> w >> h;
    if(w == 0 && h == 0){ break; }

    char input;
    int sx, sy;
    vector<vector<bool> > canGo(h + 2, vector<bool>(w + 2, false));
    for(int i = 1; i <= h; i++){
      for(int j = 1; j <= w; j++){
        cin >> input;
        if(input == '.' || input == '@'){ canGo[i][j] = true; }
        if(input == '@'){
          sx = i;
          sy = j;
        }
      }
    }
    
    int ans = dfs(sx, sy, canGo);
    cout << ans << endl;
    
  }
  return 0;
}