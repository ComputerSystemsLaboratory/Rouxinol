#include<iostream>
#include<queue>
using namespace std;
const int INF=10000;
typedef pair<int,int> P;
char town[1001][1001];
int h,w,n;
int s;
int d[1001][1001];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
char num='1';
int sx,sy,gx,gy;
int ans=0;

int bfs(){
queue<P> que;

 for(int i=0;i<h;i++){
   for(int j=0;j<w;j++){
     d[i][j]=INF;
   }
 }
 d[sy][sx]=0;
 que.push(P(sy,sx));

 while(que.size()){
   P p=que.front(); que.pop();
   
   if(town[p.first][p.second]==num){
     sy=p.first;
     sx=p.second;
     return d[p.first][p.second];
     break;
   }
   
   for(int i=0;i<4;i++){
     int ny=p.first + dy[i],nx=p.second+dx[i];
     
     if(0<=nx && nx<w && 0<=ny && ny<h && town[ny][nx]!='X' && d[ny][nx]==INF){
       que.push(P(ny,nx));
       d[ny][nx]=d[p.first][p.second]+1;
     }
   }
 }
}


int main(){
  cin>> h>> w>> n;
  
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>> town[i][j];
      if(town[i][j]=='S'){
	sy=i;
	sx=j;
      }
    }
  }

for(num='1';num<'1'+n;num++){
  ans+=bfs();
 }
  cout<< ans<< endl;
}