#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int m[55][55];
int qx[1000000],qy[1000000];
int s,e,x,y,ans;

void push(int bx,int by){
  e++;
  qx[e]=bx;
  qy[e]=by;
}
void pop(){
  x=qx[s];
  y=qy[s];
  s++;
}
void bfs(int bx,int by){
  s=0; e=-1;
  push(bx,by);
  m[by][bx]=0;
  while(s<=e){
    pop();
    for(int i=y-1;i<y+2;++i){
      for(int j=x-1;j<x+2;++j){
	if(m[i][j]){
	  push(j,i);
	  m[i][j]=0;
	}
      }
    }
  }
}
int main(){
  int w,h;
  while(cin>>w>>h,w){
    //init
    rep(i,55) rep(j,55) m[i][j]=0;
    ans=0;
    
    rep(i,h){
      rep(j,w){
	int a; cin>>a;
	m[i][j]=a;
      }
    }
    rep(i,h) rep(j,w)
      if(m[i][j]){
	bfs(j,i);
	ans++;
      }    
    cout<<ans<<endl;
  }
  return 0;
}