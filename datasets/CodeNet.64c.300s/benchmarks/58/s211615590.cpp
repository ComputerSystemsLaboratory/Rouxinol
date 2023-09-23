#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

#define W_MAX 100
#define H_MAX 100

char map[W_MAX][H_MAX];
int W,H;

void dfs(int x, int y){
  char type = map[x][y];
  map[x][y]=0;
  int dx[] = {-1,0,0,1}; int dy[] = {0,1,-1,0};

  for(int i=0; i<4; i++){
    int nx=x+dx[i], ny=y+dy[i];
    if(nx>=0 && nx<H && ny>=0 && ny<W && map[nx][ny]==type)
      dfs(nx,ny);
  }
}

int main(){
  while(true){
    cin >> H >> W;

    if(W==0 && H==0) break;

    for(int i=0; i<H; i++){
      getchar();
      for(int j=0; j<W; j++){
	scanf("%c", &map[i][j]);
      }
    }

    int ans=0;
    for(int i=0; i<H; i++){
      for(int j=0; j<W; j++){
	if(map[i][j]!=0){
	  ans++;
	  dfs(i,j);
	}
      }
    }

    cout << ans << endl;

  }
}