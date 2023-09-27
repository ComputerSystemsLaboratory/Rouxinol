#include<cstdio>
#include<iostream>
using namespace std;

char map[111][111];

int hoge(int i,int j,int h,int w,char key);
void DFS(int x,int y,int h,int w,char key);

int main(){
  int i,j;
  int h,w;
  int ans=0,cnt=0;
  char key;

  while(1){
    scanf("%d %d",&h,&w);
    
    if(h==0 && w==0) break;
    
    for(i=0;i<h;i++){
      scanf("%s",map[i]);
    }
    
    
    key='#';
    ans+=hoge(0,0,h,w,key);
    
    key='*';
    ans+=hoge(0,0,h,w,key);
    
    key='@';
    ans+=hoge(0,0,h,w,key);
    
    printf("%d\n",ans);
    ans=0;

  } 

  return 0;
}


int hoge(int i,int j,int h,int w,char key){
  int cnt=0;

  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      if(map[i][j]==key){
	cnt++;
	DFS(j,i,h,w,key);
      }
    }
  }

  return cnt;
}


void DFS(int x,int y,int h,int w,char key){

  if(x<0 || y<0 || x>=w || y>=h) return;
  if(map[y][x] != key) return;

  map[y][x]='0';

  DFS(x+1,y,h,w,key); DFS(x,y+1,h,w,key);
  DFS(x-1,y,h,w,key); DFS(x,y-1,h,w,key);

  return;
}