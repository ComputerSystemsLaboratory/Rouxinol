#include<bits/stdc++.h>
using namespace std;

char maps[102][102];
bool cheak[100][100];
int h,w;
int dy[4]={-1,0,1,0};
int dx[4]={0,-1,0,1};

void dfs(int y,int x,char sym);

int main(){
  int co;
  while(1){
    cin>>h>>w;
    if(!h && !w)break;
    co=0;
    memset(cheak,false,sizeof(cheak));
    for(int i=0;i<h;i++){
      cin>>maps[i];
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(cheak[i][j]==false){
	  co++;
	  dfs(i,j,maps[i][j]);
	}
      }
    }
    cout<<co<<endl;
  }
}

void dfs(int y,int x,char sym){
  cheak[y][x]=true;
  for(int i=0;i<4;i++){
    int ny=y+dy[i];
    int nx=x+dx[i];
    if(ny>=0 && ny<h && nx>=0 && nx<w && cheak[ny][nx]==false && maps[ny][nx]==sym){
      dfs(ny,nx,sym);
    }
  }
  return;
}