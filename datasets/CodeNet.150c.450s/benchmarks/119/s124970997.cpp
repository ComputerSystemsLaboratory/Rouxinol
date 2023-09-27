#include <bits/stdc++.h>
using namespace std;

int land[50][50], flag[50][50];
int w, h;
int xroot[] = {0,0,1,1,1,-1,-1,-1};
int yroot[] = {1,-1,0,-1,1,0,1,-1};
int cnt = 1;


void dfs(int x, int y){


  if(land[y][x] != 1) return;
  land[y][x] = cnt;

  for(int i = 0; i < 8; i++){
    int nx = x + xroot[i], ny = y + yroot[i];
    if(ny >= h || nx >= w || ny < 0 || nx < 0) continue;
    // cout << nx << " " << ny << endl;
    dfs(nx,ny);
  }
}

int main(){

  while(cin >> w >> h && (w || h)){
    cnt = 1;
    memset(flag,0,sizeof(flag));

    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){ 
	cin >> land[i][j];
      }
    }



    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){ 
	if(land[i][j] == 1){
	  cnt++;
	  dfs(j,i);
	}
      }
    }
    cout << cnt - 1 << endl;

  }



  return 0;
}