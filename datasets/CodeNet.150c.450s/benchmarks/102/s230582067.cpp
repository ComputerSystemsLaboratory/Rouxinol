#include <bits/stdc++.h>

using namespace std;

int data[22][22];
int vis[22][22];
int cnt = 0;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void dfs(int x, int y){
  vis[x][y] = 1;
  cnt++;
  for(int i = 0; i < 4; i++){
    if(data[x + dx[i]][y + dy[i]] == 1 && vis[x + dx[i]][y + dy[i]] == 0){
      dfs(x + dx[i], y + dy[i]);
    }
  }
}

int main(){
  int w, h;
  while(cin >> w >> h && w + h){
    cnt = 0;
    for(int i = 0; i < 22; i++){
      for(int k = 0; k < 22; k++){
	data[i][k] = vis[i][k] = 0;
      }
    }
    pair<int,int> start;
    for(int i = 0; i < h; i++){
      string s;
      cin >> s;
      for(int k = 0; k < w; k++){
	if(s[k] == '.')
	  data[i + 1][k + 1] = 1;
	else if(s[k] == '@')
	  start.first = i + 1,start.second = k + 1;
      }
    }
    dfs(start.first, start.second);
    cout << cnt << endl;
  }
}