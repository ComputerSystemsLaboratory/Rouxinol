#include <iostream>
using namespace std;
int W,H;
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
int i,j;
int count=0;
char room[100][100];

int dfs(int, int);

int main(){
  while(1){
    int sy,sx;
    cin >> W >> H;
    if(W==0&&H==0)break;
    for(i = 0 ; i < H ; i++){
      for(j = 0 ; j < W ; j++){
	cin >> room[i][j];
	if(room[i][j] == '@'){
	  sy = i;
	  sx = j; 
	}
      }
    }
    cout << dfs(sx,sy) << endl;
  }
  return 0;
}

int dfs(int ax,int ay){
  if(ax<0||ay<0)return 0;
  if(ax>=W||ay>=H)return 0;
  if(room[ay][ax]=='#')return 0;
  room[ay][ax]='#';
  int cnt=1;
  int i;
  for(i=0;i<4;i++){
    int nx=ax+x[i];
    int ny=ay+y[i];
    cnt+=dfs(nx,ny);
  }
  return cnt;
}