#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>


using namespace std;

typedef pair<int,int> P;

const int INF=INT_MAX;
const int N=30;


char tiles[N][N];
int W,H;
int ans=0;


void solve(int i, int j){
  
  tiles[i][j]='x';
  ans++;

  int di[4]={-1,0,1,0};
  int dj[4]={0,-1,0,1};

  for(int k=0;k<4;k++){
    int ni=i+di[k],nj=j+dj[k];
    if(0<=ni&&ni<H && 0<=nj&&nj<W)
      if(tiles[ni][nj]=='.'){
	solve(ni,nj);
      }
  }   
  
}



int main(){

  P start;

  
  while(1){

    cin>>W>>H;
    start = P(INF,INF);

    if(W==0 && H==0) break;
    ans=0;
    
    for(int i=0;i<H;i++){
      cin>>tiles[i];
      if(start.first==INF){
	for(int j=0;j<W;j++)
	  if(tiles[i][j]=='@') start=P(i,j);
      }
    }
    solve(start.first,start.second);
    cout<<ans<<endl;
  }

  return 0;
}