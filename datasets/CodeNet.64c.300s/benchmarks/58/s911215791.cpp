#include<iostream>
#include<cstdio>
using namespace std;

char maps[101][101];
int w,h;
int py[4]={-1,0,1,0};
int px[4]={0,1,0,-1};

void fruit(int y,int x,char c){
  if(y<h&&x<w&&y>=0&&x>=0&&maps[y][x]==c){
    for(int l=0;l<4;l++){
      maps[y][x]='$';
      fruit(y+py[l],x+px[l],c);
    }
  }
  return;
}

int main(){
  while(1){
    int cnt=0;
    scanf(" %d %d",&h,&w);
    if(h==0&&w==0)break;
    for(int i=0;i<h;i++){
      scanf(" %s",maps[i]);
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(maps[i][j]!='$'){
	  fruit(i,j,maps[i][j]);
	  cnt++;
	}
      }
    }
    cout << cnt << endl;
  }
  return 0;
}