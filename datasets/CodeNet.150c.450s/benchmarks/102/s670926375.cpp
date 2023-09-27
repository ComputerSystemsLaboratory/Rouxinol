#include<iostream>
#include<queue>
using namespace std;

int point(int x,int y,int w,int h){
  int s;
  s= y*w+x;
  return s;
}

int point_x(int x,int w){
  int s;
  s=x%w;
  return s;
}

int point_y(int x,int w){
  int s;
  s=x/w;
  return s;
}

int main(){
  int w,h;
  cin>>w>>h;
  while(w!=0){
    int a[21][21]={};
    int sx,sy;
    for(int j=0;j<h;j++){
      for(int i=0;i<w;i++){
	char s;
	cin>>s;
	if(s=='.'){
	  a[i][j]=1;
	}else if(s=='#'){
	  a[i][j]=-1;
	}else{
	  a[i][j]=2;
	  sx=i;
	  sy=j;
	}
      }
    }

    int d[21][21];
    for(int i=0;i<21;i++){
      for(int j=0;j<21;j++){
	d[i][j]=-1;
      }
    }
    queue<int>q;
    d[sx][sy]=0;
    int str;
    str=point(sx,sy,w,h);
    q.push(str);
    while(! q.empty()){
      int cur =q.front();
      q.pop();
      int x,y;
      x=point_x(cur,w);
      y=point_y(cur,w);
      if(x>=1){
	if(a[x-1][y]==1&&d[x-1][y]==-1){
	  d[x-1][y]=0;
	  q.push(point(x-1,y,w,h));
	}
      }
      if(x<=w-2){
	if(a[x+1][y]==1&&d[x+1][y]==-1){
	  d[x+1][y]=0;
	  q.push(point(x+1,y,w,h));
	}
      }
      if(y>=1){
	if(a[x][y-1]==1&&d[x][y-1]==-1){
	  d[x][y-1]=0;
	  q.push(point(x,y-1,w,h));
	}
      }
      if(y<=h-2){
	if(a[x][y+1]==1&&d[x][y+1]==-1){
	  d[x][y+1]=0;
	  q.push(point(x,y+1,w,h));
	}
      }
    }

    int t=0;
    for(int i=0;i<w;i++){
      for(int j=0;j<h;j++){
	if(d[i][j]==0){
	  t+=1;
	}
      }
    }
    cout <<t<< endl;
    cin>>w>>h;
  }
}
    
    