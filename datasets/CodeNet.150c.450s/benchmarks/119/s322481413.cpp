#include <bits/stdc++.h>
using namespace std;

int Count;
int w,h;
bool area[51][51]={};
int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={1,1,0,-1,-1,-1,0,1};

void bfs(int x,int y){
  int X,Y;
  queue<pair<int,int> > Q;
  Q.push(make_pair(x,y));
  area[x][y]=0;
  while(!Q.empty()){
    pair<int,int> p1=Q.front();
    X=p1.first;
    Y=p1.second;
    Q.pop();
    for(int i=0;i<8;i++){
      if((X+dx[i]<=-1||Y+dy[i]<=-1)||(X+dx[i]>=w||Y+dy[i]>=h))continue;
      if(area[X+dx[i]][Y+dy[i]]==1){
        Q.push(make_pair(X+dx[i],Y+dy[i]));
        area[X+dx[i]][Y+dy[i]]=0;
      }
    }
  } 
  return;
}

int main(){
  int I;
  while(cin>>w>>h,w){
    Count=0;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        cin>>I;
        area[j][i]=I;
      }
    }

    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(area[j][i]==1){
          bfs(j,i);
          Count++;
        }
      }
    }
    cout<<Count<<endl;
  }
  return 0;
}