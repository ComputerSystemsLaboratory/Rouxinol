#include <iostream>
#include <cassert>
#define REP(i,l,n) for(int i=l;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define MAX 21
int ans,baseX,baseY;
int w,h;
char tile[MAX][MAX];
void seek(int x,int y);
using namespace std;
int main() {
  while(1){
    cin >> w;
    cin >> h;
    if(w==0&&h==0) return 0;
    rep(i,h){
      rep(j,w){
        cin >> tile[i][j];
        if(tile[i][j] == '@'){
          baseX = i;
          baseY = j;
        }
      }
      tile[i][w] = '#';
    }
    rep(i,w) tile[h][i] = '#';
    ans = 1;
    seek(baseX,baseY);
    cout << ans << endl;
  }
  return 0;
}

void seek(int x,int y){
  if(tile[x+1][y] == '.'){
    tile[x+1][y] = '#';
    ans++;
    seek(x+1,y);
  }
  if(tile[x][y+1] == '.'){
    tile[x][y+1] = '#';
    ans++;
    seek(x,y+1);
  }
  if(tile[x-1][y] == '.'){
    tile[x-1][y] = '#';
    ans++;
    seek(x-1,y);
  }
  if(tile[x][y-1] == '.'){
    tile[x][y-1] = '#';
    ans++;
    seek(x,y-1);
  }
}