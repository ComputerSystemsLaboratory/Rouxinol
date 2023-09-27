#include<iostream>
#include<string>

using namespace std;

string a[21];
int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
int cnt, X, Y;

void dfs(int y, int x){
  if( y < 0 || Y <= y || x < 0 || X <= x || a[y][x] == '#') return;
  a[y][x] = '#';
  cnt++;
  for(int i = 0; i < 4; i++)
    dfs(y + dy[i], x + dx[i]);
}

int main(){
  while(cin >> X >> Y, X != 0 || Y != 0) {
    int sx = 21, sy;
    for(int i = 0; i < Y; i++){
      cin >> a[i];
      if(sx == 21)
	for(int j = 0; j < X; j++)
	  if(a[i][j] == '@') sy = i, sx = j;
    }
    cnt = 0;
    dfs(sy, sx);
    
    cout << cnt << endl;
  }
}