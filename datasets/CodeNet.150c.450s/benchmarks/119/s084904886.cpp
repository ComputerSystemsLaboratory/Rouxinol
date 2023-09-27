#include<bits/stdc++.h>
using namespace std;

int h,w;
int maps[50][50];
int dy[]={-1,-1,-1,0,0,0,1,1,1};
int dx[]={-1,0,1,-1,0,1,-1,0,1};

void dfs(int y,int x);

int main(){
  int cnt;
  while(cin >> w >> h,w|h){
    cnt = 0;
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
	cin>>maps[i][j];
      }
    }
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
	if(maps[i][j] == 1){
	  cnt++;
	  dfs(i,j);
	}
      }
    }
    cout << cnt << endl;
  }
}

void dfs(int y,int x){
  maps[y][x] = 0;
  for(int i = 0; i < 9;i++){
    int sy = y + dy[i];
    int sx = x + dx[i];
    if(sy >= 0 && sy < h && sx >= 0 && sx < w && maps[sy][sx] == 1){
      dfs(sy,sx);
    }
  }
  return;
}