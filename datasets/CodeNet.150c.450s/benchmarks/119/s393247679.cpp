#include <iostream>
#include <vector>
using namespace std;

const int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
const int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

void dfs(int x, int y, vector<vector<bool> >& canGo){
  canGo[x][y] = false;
  for(int i = 0; i < 8; i++)
    if(canGo[x + dx[i]][y + dy[i]])
      dfs(x + dx[i], y + dy[i], canGo);
  return;
}


int main(void){
  while(true){
    int w, h;
    cin >> w >> h;
    if(w == 0 && h == 0){ break; }

    int input;
    vector<vector<bool> > canGo(h + 2, vector<bool>(w + 2, false));
    for(int i = 1; i <= h; i++){
      for(int j = 1; j <= w; j++){
        cin >> input;
        if(input == 1){ canGo[i][j] = true; }
      }
    }

    int count = 0;
    for(int i = 1; i <= h; i++){
      for(int j = 1; j <= w; j++){
        if(canGo[i][j]){
          ++count;
          dfs(i, j, canGo);
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}