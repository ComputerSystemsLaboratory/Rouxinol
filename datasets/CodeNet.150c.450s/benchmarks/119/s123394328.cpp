#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int c[52][52];

bool dfs(int x,int y){
  if(c[x][y]==0) return false;
  c[x][y]=0;
  for(int i=-1;i<=1;i++){
    for(int j=-1;j<=1;j++){
      if((i|j)!=0&&c[x+i][y+j]!=0)
	dfs(x+i,y+j);
    }
  }
  return true;
}

int main(){ _;
  int w,h;
  while(cin>>w>>h,!(w==0&&h==0)){
    int count=0;
    REP(j,h+2)REP(i,w+2) c[i][j]=0;
    REP(j,h)REP(i,w) cin>>c[i+1][j+1];
    REP(j,h)REP(i,w)
      if(dfs(i+1,j+1))
	count++;
    cout<<count<<endl;
  }
}