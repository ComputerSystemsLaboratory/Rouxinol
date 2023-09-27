#include <bits/stdc++.h>
using namespace std;

char fe[20][20];
int flag[20][20];
int W, H;

void dfs(int x, int y){

  if(flag[y][x] == 1) return;

  //  cout << x << " " << y << endl;

  flag[y][x] = 1;

  if(fe[y+1][x] == '.' && y < H-1) dfs(x, y+1);
  if(fe[y-1][x] == '.' && y > 0) dfs(x, y-1);
  if(fe[y][x+1] == '.' && x < W-1) dfs(x+1, y);
  if(fe[y][x-1] == '.' && x > 0) dfs(x-1, y);


}

int main(){

  while(cin >> W >> H && (W || H)){

    memset(flag,0,sizeof(flag));

    int x, y, cnt = 0;

    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
	cin >> fe[i][j];
	if(fe[i][j] == '@'){
	  x = j; 
	  y = i;
	}
      }
    }

    dfs(x, y);

    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
	if(flag[i][j] == 1) cnt++;
      }
    }
    //  cout << x << " " << y << endl;
    cout << cnt << endl;
  }


  return 0;
}