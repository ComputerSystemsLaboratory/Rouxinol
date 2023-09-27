#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;


int h,g[11][11];

bool fall(int x,int y){

  if(g[y][x]==0)return false;

  bool fg=false;
  int tmp=g[y][x];
  g[y][x]=0;
  while(y>0 && g[y-1][x]==0)y--,fg=true;
  g[y][x]=tmp;
  return fg;
}

int remove(int x,int y){

  if(g[y][x]==0)return 0;
  
  int res=g[y][x],cnt=0;
  while(g[y][x]==g[y][x+cnt])cnt++;

  if(cnt<3)return 0;
    
  for(int i=0;i<cnt;i++)g[y][x+i]=0;
  
  return res*cnt;
}

int solve(){

  bool fg;
  int res=0;

  while(true){
    fg=false;
    
    for(int i=0;i<h;i++){
      for(int j=0;j<5;j++){
	res+=remove(j,i);
      }
    }

    for(int i=0;i<h;i++){
      for(int j=0;j<5;j++){
	fg|=fall(j,i);
      }
    }

    if(!fg)return res;
  }
}

int main(void){
  
  while(cin >> h,h){

    for(int i=0;i<11;i++)
      for(int j=0;j<11;j++)g[i][j]=0;

    for(int i=h-1;i>=0;i--){
      for(int j=0;j<5;j++)cin >> g[i][j];
    }

    cout << solve() << endl;
  }

  return 0;
}