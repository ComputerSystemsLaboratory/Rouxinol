#include<iostream>
#include<vector>
using namespace std;

const int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};

int dfs(int y, int x, vector<string> &g){
  if(g[y][x] == '#')return 0;
  g[y][x] = '#';

  int res = 1;
  for(int i=0;i<4;i++){
    int ny = y + dy[i], nx = x + dx[i];
    if(ny<0 || nx<0 || ny>=(int)g.size() || nx>=(int)g[0].size())continue;
    res += dfs(ny,nx,g);
  }
  return res;
}

int main(){
  int w,h;
  while(cin >> w >> h){
    if(w==0 && h==0)break;

    vector<string> g(h);
    int y=0,x=0;
    for(int i=0;i<h;i++){
      cin >> g[i];
      for(int j=0;j<w;j++){
	if(g[i][j] == '@')y = i, x = j;
      }
    }

    cout << dfs(y,x,g) << endl;
  }
}