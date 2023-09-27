#include<bits/stdc++.h>
using namespace std;
int w,h;
int c[55][55];
int dx[8]={1,1,1,-1,-1,-1,0,0};
int dy[8]={1,-1,0,1,-1,0,1,-1};
void dfs(int i,int j){
  c[j][i]=0;
  for(int k=0;k<8;k++){
    int nx = i + dx[k], ny = j + dy[k];
    if(nx < 0 || ny < 0 || nx >= w || ny >= h) continue;
    if(c[ny][nx]==1) dfs(nx,ny);
  }
}
int main(){
  while(1){
    cin>>w>>h;
    if(w==0 && h==0) break;
    int cnt=0;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>c[i][j];
      }
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(c[i][j]==1){
	  cnt++;
	  dfs(j,i);
	}
      }
    }

    cout<<cnt<<endl;
  }

  return 0;

    
      
}

