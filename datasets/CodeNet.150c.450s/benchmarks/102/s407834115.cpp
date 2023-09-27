#include<iostream>
using namespace std;

int vis[25][25];

void inti(){
  for(int i=0;i<25;i++){
    for(int j=0;j<25;j++){
      vis[i][j]=0;
    }
  }
}

void dfs(int i,int j){
  if(vis[i][j]==0 || vis[i][j]==2)return;
  vis[i][j]=0;

    dfs(i-1,j);
    dfs(i,j-1);
    dfs(i,j+1);
    dfs(i+1,j);
}

int main(){
  int w,h;
  int i,j;
  char ch;
  int cnt;

  while(1){
    inti();
    cnt=0;
    cin >> w >> h;
    if(w==0 && h==0)break;

    for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
	cin >> ch;
	if(ch=='.'){
	  vis[i][j]=1;
	}else if(ch=='#'){
	  vis[i][j]=2;
	}else{
	  vis[i][j]=5;
	}
      }
    }
     for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
	if(vis[i][j]==5)dfs(i,j);
      }
     }
      for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
	if(vis[i][j]==0)cnt++;
      }
     }
      cout << cnt << endl;
  }
}
    