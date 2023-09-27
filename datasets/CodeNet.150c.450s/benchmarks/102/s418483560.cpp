#include <iostream>
#include <vector>
#include <string>

using namespace std;

int w, h;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dfs(vector<string>& mp, int x, int y){
  int cnt = 0;  
  for(int i=0;i<4;++i){
	int tx = x + dx[i];
	int ty = y + dy[i];
	if(tx < 0 || w <= tx || ty < 0 || h <= ty) continue;
	if(mp[ty][tx] == '#') continue;
	mp[ty][tx] = '#';
	cnt += dfs(mp, tx, ty) + 1;
  }
  return cnt;
}

int main(){
  while(true){
	if(!(cin >> w >> h)) return 0;
	if(w == 0 && h == 0) break;
	vector<string> vs(h);
	for(int i=0;i<h;++i)
	  cin >> vs[i];
	int x, y;
	for(int i=0;i<h;++i)
	  for(int j=0;j<w;++j)
		if(vs[i][j] == '@') x=j, y=i;
	vs[y][x] = '#';
	cout << 1+dfs(vs,x,y) << endl;
  }
  return 0;
}