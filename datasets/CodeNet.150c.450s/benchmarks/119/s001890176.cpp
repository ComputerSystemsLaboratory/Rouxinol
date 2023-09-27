#include<iostream>
using namespace std;

int c[51][51];
void dfs(int x,int y){
  int i,j;
  c[x][y]=0;
  for(i=-1;i<=1;++i){
    for(j=-1;j<=1;++j){
      if(c[x+i][y+j]==1){
	dfs(x+i,y+j);
      }
    }
  }
}

int main(){
  int w,h;
  int i,j;

  while(1){
    cin >>w >>h;
    if(w==0 && h==0) break;
    int cnt=0;
    for(i=0;i<h;++i){
      for(j=0;j<w;++j)
	cin >>c[i][j];
    }
    for(i=0;i<h;++i){
      for(j=0;j<w;++j){
	if(c[i][j]==1){
	  dfs(i,j);
	  cnt++;
	}
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
     