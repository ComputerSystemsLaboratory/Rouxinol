#include<bits/stdc++.h>
using namespace std;

int w,h;
int maps[50][50];

void dfs(int y, int x)
{
  int dx[]={1,-1,0,0};
  int dy[]={0,0,1,-1};

  maps[y][x]=0;

  for(int i=0;i < 4;i++){
    for(int j=0;j < 4;j++){
      int xx = x + dx[j];
      int yy = y + dy[i];
      if(maps[yy][xx] == 1 && xx >= 0 && xx < w && yy >= 0 && yy < h) dfs(yy,xx);
    }
  }
}

int main(){
  while(cin >> w >> h && w)
    {
      for(int i=0;i < h;i++){
	for(int j=0;j < w;j++){
	  cin >> maps[i][j];
	}
      }
      int island=0;

      for(int i=0;i < h;i++){
	for(int j=0;j < w;j++){
	  if(maps[i][j] == 1){
	    island++;
	    dfs(i,j);
	  }
	}
      }
      cout << island << endl;
    }
  return 0;
}

