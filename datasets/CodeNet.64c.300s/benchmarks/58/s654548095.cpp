#include<iostream>
#include<cstdio>
#define MAX 1001

//入力
int n,m;
char field[MAX][MAX]={};//庭

//プロトタイプ宣言
void bfs(int x,int y,char f);
void slove();

int main(){
  int i,j;
  
  while(1){
    scanf("%d %d",&n,&m);
    if(n==0 && m==0) break;
    for(i=0;i<n;i++){
      scanf("%s",field[i]);
    }
    slove();
  }

  return 0;
}

void slove(){
  int res=0; char f=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

      if(field[i][j]=='@'){
	f='@';
	bfs(i,j,f);
	res++;
      }
      else if(field[i][j]=='#'){
	f='#';
	bfs(i,j,f);
	res++;
      }
      else if(field[i][j]=='*'){
	f='*';
	bfs(i,j,f);
	res++;
      }

    }
  }
  printf("%d\n",res);
}

void bfs(int x,int y,char f){
  int nx,ny;
  //今いるところを、.に置き換える
  field[x][y]='.';

      //x方向にdx y方向にdy 移動した場所を(nx,ny)とする
      nx=x-1,ny=y;
      //nxとnyが庭の範囲内かどうかとfield[nx][ny]が水たまりかどうかを判定
      if(0<=nx && nx<n && 0<=ny && ny<m && field[nx][ny]==f) bfs(nx,ny,f);//水たまりだったら再起
      nx=x; ny=y-1;
      if(0<=nx && nx<n && 0<=ny && ny<m && field[nx][ny]==f) bfs(nx,ny,f);//水たまりだったら再起
      nx=x; ny=y+1;
      if(0<=nx && nx<n && 0<=ny && ny<m && field[nx][ny]==f) bfs(nx,ny,f);//水たまりだったら再起
      nx=x+1; ny=y;
      if(0<=nx && nx<n && 0<=ny && ny<m && field[nx][ny]==f) bfs(nx,ny,f);//水たまりだったら再起

  return ;
}