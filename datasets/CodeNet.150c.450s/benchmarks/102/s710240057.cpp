#include<iostream>
#define REP(i,s,n) for(int i=s ; i < n ; i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int W,H;
char field[20][20];
int cnt;

void dfs(int x,int y){

  field[y][x]='#';
  
  cnt++;
  
  if( x+1 < W && field[y][x+1] == '.'){
    dfs(x+1,y);
  }
  if(x-1 >= 0 && field[y][x-1] == '.'){
    dfs(x-1,y);
  }
  if(y+1 < H && field[y+1][x] == '.'){
    dfs(x,y+1);
  }
  if(y-1 >=0 && field[y-1][x] == '.'){
    dfs(x,y-1);
  }
  
}
int main(){
  
  int x,y;
  
  while(1){
    cin >>W>>H;
    if(W==0 && H==0)break;
    
    rep(i,H){
      rep(j,W){
	cin >>field[i][j];
	if(field[i][j] == '@'){
	  x=j;
	  y=i;
	}
      }
    }
    cnt=0;
    dfs(x,y);
    cout <<cnt<<endl; 
  }
  
  return 0;
}