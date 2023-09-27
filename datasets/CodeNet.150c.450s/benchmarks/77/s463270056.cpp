#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  int maps[21][21];
  int cnt;
  int x,y;
  char hou;
  int kyo;
  while(cin>>n,n){
    memset(maps,0,sizeof(maps));
    cnt=n;
    for(int i=0;i<n;i++){
    cin>>x>>y;
    maps[y][x]=1;
    }
    x=10;
    y=10;
    cin>>m;
    for(int i=0;i<m;i++){
      cin>>hou>>kyo;
      if(hou=='N'){
	for(int i=0;i<kyo;i++){
	  y++;
	  if(maps[y][x]==1){
	    cnt--;
	    maps[y][x]=0;
	  }
	}
      }
      if(hou=='E'){
	for(int i=0;i<kyo;i++){
	  x++;
	  if(maps[y][x]==1){
	    cnt--;
	    maps[y][x]=0;
	  }
	}
      }
      if(hou=='S'){
	for(int i=0;i<kyo;i++){
	  y--;
	  if(maps[y][x]==1){
	    cnt--;
	    maps[y][x]=0;
	  }
	}
      }
      if(hou=='W'){
	for(int i=0;i<kyo;i++){
	  x--;
	  if(maps[y][x]==1){
	    cnt--;   
	    maps[y][x]=0;
	  }
	}
      }
    }
 
    if(cnt)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
  }
}