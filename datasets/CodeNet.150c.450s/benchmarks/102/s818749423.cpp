#include<iostream>
using namespace std;

int dfs(int x,int y);
int h,w;
char ta[22][22];
int cheak[22][22]={0};
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
	cheak[i][j]=0;
	if(ta[i][j] == '@'){
	  a=i,b=j;
	}
      }
    }
    //cout << a << " " << b << endl;
    cout << dfs(a,b) << endl;
    /*for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
      cout << cheak[i][j];
      }
      cout << endl;
      }*/
  }
}

int dfs(int x,int y){
  cheak[x][y]=1;
  cou++;
  for(int i=0;i<4;i++){
    int nx=x+dx[i];
    int ny=y+dy[i];
    if(nx>=0 && nx<h && ny>=0 && ny<w && ta[nx][ny]=='.' && cheak[nx][ny]==0){
      dfs(nx,ny);
    }
  }
  return cou;
}