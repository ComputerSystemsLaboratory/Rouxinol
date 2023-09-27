#include <bits/stdc++.h>
using namespace std;

int main(){
  bool g[21][21];
  int n;
  int x,y;
  while(cin>>n && n){
    int rx=10,ry=10,dx,dy,dxy;
    char ch;
    memset(g,0,sizeof(g));
    for(int i=0;i<n;i++){
      cin>>x>>y;
      g[x][y]=1;
    }
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>ch>>dxy;
      if(ch=='N') { dx=0;dy=1;}
      else if(ch=='E') { dx=1;dy=0;}
      else if(ch=='S') { dx=0;dy=-1;}
      else {dx=-1;dy=0;}
      while(dxy--){rx+=dx;ry+=dy;g[rx][ry]=0;}
    }
    bool f=0;
    for(int i=0;i<21;i++)
      for(int j=0;j<21;j++){
	if(g[i][j]) f=1;
      }
    if(f) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
  }
  
  return 0;
}