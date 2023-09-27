#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<algorithm>
#define SIZE 102
using namespace std;


char mass[SIZE][SIZE];
int  d[SIZE][SIZE];
int  dx[4]={1,0,-1,0};
int  dy[4]={0,1,0,-1};
int  sx,sy;
int  h,w,cnt=0;
char mark;

int dfs(int x,int y);

int main(){

  int i,j;

  while(1){

    cin>>h>>w;

    if(h==0 && w==0)break;

    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
	cin>>mass[i][j];
      }
    }

    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
	if(mass[i][j]!='.'){
	  mark=mass[i][j];
	  cnt++;
	  dfs(j,i);
	}
      }
    }

    cout<<cnt<<endl;
    cnt=0;

  }

  return 0;

}

int dfs(int x,int y){

  int i;
  mass[y][x]='.';

  for(i=0;i<4;i++){

    int nx=x+dx[i];
    int ny=y+dy[i];

    if(nx>=0 && nx<w && ny>=0 && ny<h && mass[ny][nx]==mark){
      dfs(nx,ny);
    }
  }

  return 0;
}