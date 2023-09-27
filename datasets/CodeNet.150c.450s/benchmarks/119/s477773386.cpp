#include <iostream>
using namespace std;

int w,h;
int islID;
int mp[52][52], island[52][52];
void dfs(int x, int y){
  if (mp[x][y]==0 || island[x][y]) return;
  island[x][y] = islID;
  for (int dx = -1; dx<=1; dx++){
    for (int dy= -1; dy<=1; dy++){
      if (dx==0 && dy==0) continue;
      dfs(x+dx, y+dy);
    }
  }
}

int main(void){  
  while (cin >> w >> h){
    if (w==0 && h==0) break;
    for (int i=0; i<h; i++){
      for (int j=0; j<w; j++){
        cin >> mp[j+1][i+1];
        island[j+1][i+1] = 0;
      }
    }
    islID = 0;
    for (int i=1; i<=h; i++){
      for (int j=1; j<=w; j++){
        if (mp[j][i] && !island[j][i]){
          islID++; 
          dfs(j, i);
        }
//        cout << island[j][i] << " ";
      }
//      cout << endl;
    }
    cout << islID << endl;
  }
  return 0;
}
