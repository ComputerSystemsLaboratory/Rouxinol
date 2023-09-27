#include <iostream>
using namespace std;
int w,h;
int count; 
int dx[4]={1,0,-1,0};int dy[4]={0,1,0,-1};
char board[100][100];
void dfs(int x,int y){
       count++;
       board[y][x]='#';
    for(int i=0;i<4;i++){
      int nx=x+dx[i];int ny=y+dy[i];
      if(nx>=0&&nx<w&&ny>=0&&ny<h&&board[ny][nx]=='.'){
          dfs(nx,ny);
      }
    }
}
int main(){
	while(1){
  cin>>w>>h;
  if(w==0&&h==0) break;
  count=0;
  for(int k=0;k<h;k++){
    cin>>board[k];
  }
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(board[i][j]=='@'){
         dfs(j,i);
      }
    }
  }
  cout<<count<<endl;
}
  return 0;
}