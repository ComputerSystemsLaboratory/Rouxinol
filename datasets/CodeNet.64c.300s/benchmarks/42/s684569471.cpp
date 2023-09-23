#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<map>
#include<set>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define MAX_N 23
#define MAX_M 33

int N,M,x,y;
bool field[21][21];
char dir[MAX_M];
int dis[MAX_M];

bool input(){
  x=10;
  y=10;
  REP(i,21){
    REP(j,21){
      field[i][j]=false;
    }
  }
  cin>>N;
  REP(i,N){
    int a,b;
    cin>>a>>b;
    field[a][b]=true;
  }
  if(N!=0){
   cin>>M;
   REP(i,M) cin>> dir[i]>>dis[i];
   }
  return(N!=0);
}

void solve(){
  REP(i,M){
    if(dir[i]=='N'){
      REP(j,dis[i])field[x][y+j]=false;
      y+=dis[i];
    }
    else if(dir[i]=='E'){
      REP(j,dis[i])field[x+j][y]=false;
      x+=dis[i];
    }
    else if(dir[i]=='S'){
      REP(j,dis[i])field[x][y-j]=false;
      y-=dis[i];
    }
    else{
      REP(j,dis[i])field[x-j][y]=false;
      x-=dis[i];
    }
  }
  field[x][y] = false;

  REP(i,21){
    REP(j,21){
      if(field[i][j]){
        cout<<"No"<<endl;
        return ;
      }
    }
  }
  cout<<"Yes"<<endl;
}

int main(){
  while(input()){
    solve();
  }
  return 0;
}