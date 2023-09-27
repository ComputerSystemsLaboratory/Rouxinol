#include<iostream>
#include<vector>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
const int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1}, dy[] = {0, -1, -1, -1, 0, 1, 1, 1};

int w, h;
vector<vector<int> > c;

inline bool inrect(int x, int y){
    return 0 <= x && x < h && 0 <= y && y < w;
}

void visit(int x, int y){
    rep(k, 8){
        int nx = x + dx[k], ny = y + dy[k];
        if(!inrect(nx, ny) || !c[nx][ny])continue;
        c[nx][ny] = 0;
        visit(nx, ny);
    }
}

int solve(){
    int res = 0;
    rep(i, h)rep(j, w)if(c[i][j])visit(i, j), res++;
    return res;
}

int main(){
  while(cin >> w >> h, w|h){
      c.assign(h, vector<int>(w, 0));
      rep(i, h)rep(j, w)cin >> c[i][j];
      cout << solve() << '\n';
  }
  return 0;
}