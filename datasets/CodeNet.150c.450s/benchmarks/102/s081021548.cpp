#include<bits/stdc++.h>
using namespace std;
char m[21][21];
int cnt=1,w,h;
void dfs(int x,int y){
  int i,j;
  m[y][x]='#';
  for(i=-1;i<=1;++i){
    if(y+i<0) continue;
    if(m[y+i][x]=='.'){
      cnt++;
      dfs(x,y+i);
    }
  }
  for(j=-1;j<=1;++j){
    if(x+j<0) continue;
    if(m[y][x+j]=='.'){
      cnt++;
      dfs(x+j,y);
    }
  }
}
int main(){
  int i,j,x,y;
  while(cin>>w>>h){
    if(w==0&&h==0) break;
    for(i=0;i<21;++i)
      for(j=0;j<21;++j)
	m[i][j]=0;
    for(i=0;i<h;++i){
      for(j=0;j<w;++j){
	cin>>m[i][j];
	if(m[i][j]=='@'){
	  x=j;
	  y=i;
	}
      }
    }
    cnt=1;
    dfs(x,y);
    cout<<cnt<<endl;
  }
  return 0;
}