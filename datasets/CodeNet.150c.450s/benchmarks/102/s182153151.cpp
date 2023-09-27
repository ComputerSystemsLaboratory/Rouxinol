#include<iostream>
using namespace std;

void dfs(int x,int y);
int h,w;
char ta[22][22];
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int cou=0;

int main(){
  int a,b;
  while(1){
    cin >> w >> h;
    if(w==0 && h==0) break;
    cou=0;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin >> ta[i][j];
	if(ta[i][j]=='@'){
	  a=i,b=j;
	}
      }
    }
    dfs(a,b);
    cout << cou << endl;
  }
}

void dfs(int x,int y){
  ta[x][y]='#';
  cou++;
  for(int i=0;i<4;i++){
    int nx=x+dx[i];
    int ny=y+dy[i];
    if(nx>=0 && nx<h && ny>=0 && ny<w && ta[nx][ny]=='.'){
      dfs(nx,ny);
    }
  }
}