#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <algorithm>
using namespace std;

typedef pair<int,int> P;
int F[50][50];
int x[8]={1,1,1,0,0,-1,-1,-1};
int y[8]={1,0,-1,1,-1,1,0,-1};
int h,w;

void dfs(int j, int i){
  stack<P> S;
  S.push(P{j,i});
  F[i][j]=0;
  while(!S.empty())
  {
    P p=S.top(); S.pop();
    for(int i=0;i<8;i++)
    {
      int nx=p.first+x[i], ny=p.second+y[i];
      if(nx>=0 && nx<w && ny>=0 && ny<h && F[ny][nx]==1)
      {
        F[ny][nx]=0;
        S.push(P{nx,ny});
      }
    }
  }
}
int island(int w,int h){
  int ans=0;
  for(int i=0;i<h;i++)
  {
    for(int j=0;j<w;j++)
    {
      if(F[i][j]==1)
      {
        ans++;
        dfs(j,i);
      }
    }
  }
  return ans;
}

int main(){
    cin>>w>>h;
    while(true){
      if(w==0 && h==0) break;
      for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
          cin>>F[i][j];
        }
      }
      cout<<island(w,h)<<"\n";
      cin>>w>>h;
    }

}

