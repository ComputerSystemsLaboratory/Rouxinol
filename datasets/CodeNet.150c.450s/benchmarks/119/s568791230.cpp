#include<iostream>
using namespace std;
void dfs(int,int);
int a[52][52]={};

int main(){
  while(1){
    int count=0,w,h;
    cin>>w>>h;
    if(w+h==0)break;
    
    for(int i=1;i<=h;i++)
      for(int j=1;j<=w;j++)
	cin>>a[i][j];

    for(int i=1;i<=h;i++)
      for(int j=1;j<=w;j++)
	if(a[i][j]==1){
	  dfs(j,i);
	  count++;
	}
    cout<<count<<endl;  
  }
  return 0;
}

  void dfs(int x,int y){
    a[y][x]=0;
    int nx,ny;
    int dx[8]={1,1,1,0,-1,-1,-1,0};
    int dy[8]={1,0,-1,-1,-1,0,1,1};
    for(int k=0;k<8;k++){
	nx=x+dx[k];
	ny=y+dy[k];
	if(a[ny][nx]==1){
	  dfs(nx,ny);
	}
    }
  }