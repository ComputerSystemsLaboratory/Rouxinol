#include <iostream>
#include <string>

using namespace std;
int W, H;
string s[20];
int num;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void dfs(int x, int y){
  num++;
  s[y][x] = '#';
  for(int i=0; i<4; i++){
    if(0<=x+dx[i] && x+dx[i]<W && 0<=y+dy[i] && y+dy[i]<H && s[y+dy[i]][x+dx[i]]=='.'){
      dfs(x+dx[i], y+dy[i]);
    }
  }
}

int main(){
  while(cin >> W >> H, W || H){
    for(int i=0; i<H; i++){
      cin >> s[i];
    }
    int x, y;
    for(int i=0; i<H; i++){
      for(int j=0; j<W; j++){
	if(s[i][j] == '@'){
	  x = j;
	  y = i;
	}
      }
    }
    num = 0;
    dfs(x, y);
    cout << num << endl;
  }
  return 0;
}