
#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <string>
//typedef pair<int,int> P;

using namespace std;

const int INF=INT_MAX/3;
const int V_MAX=10000,E_MAX=10000;

int H,W;
const int MAX=200;

char maps[MAX][MAX];

void solve(int i,int j){

  int dx[4]={-1,0,1,0};
  int dy[4]={0,-1,0,1};

  char c=maps[i][j];
  maps[i][j]='.';
  
  for(int k=0;k<4;k++){
    int ni=i+dx[k];
    int nj=j+dy[k];
    if((0<=ni && ni<H) && (0<=nj && nj<W))
      if(maps[ni][nj]!='.' && c==maps[ni][nj]){
	//cout<<"pohe"<<endl;
	solve(ni,nj);
      }
  }
  
  

}



int main(){

  int res=0;
  
  while(1){
    res=0;
    cin>>H>>W;
    if(H==0 && W==0) break;

    for(int i=0;i<H;i++){
      cin>>maps[i];
    }
    //cout<<"hoge\n";

    for(int i=0;i<H;i++)
      for(int j=0;j<W;j++){
	if(maps[i][j]!='.'){
	  solve(i,j);
	  res++;
	  //cout<<"piyo"<<endl;
	}
	/*
	for(int i=0;i<H;i++){
	  for(int j=0;j<W;j++){
	    cout<<maps[i][j]<<" ";
	  }
	  cout<<endl;
	}
	cout<<endl;
	*/
      }
    cout<<res<<endl;

    //cout<<solve()<<endl;
  }

  return 0;
}