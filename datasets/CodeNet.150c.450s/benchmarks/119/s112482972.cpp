#include<iostream>
using namespace std;
#include<vector>

int wm,hm;
vector< vector<int> > wh(51, vector<int>(51,0));

int xp[]={-1,0,1,-1,1,-1,0,1};
int yp[]={-1,-1,-1,0,0,1,1,1};

void dfs(int y,int x){
  for(int i=0;i<8;i++){
    int nx=x+xp[i];
    int ny=y+yp[i];
    if(nx>-1&&nx<wm&&ny>-1&&ny<hm&&wh[ny][nx]==1){
      //cout<<nx<<" "<<ny<<" "<<wh[nx][ny]<<endl;
      wh[ny][nx]=0;
      dfs(ny,nx);
    }
  }
}

int main(){
  while(1){
    //int wm,hm;
    int aa,bb;
    cin>>aa>>bb;
    wm=aa;
    hm=bb;
    if(wm==0&&hm==0)break;
    //vector< vector<int> > wh(wm, vector<int>(hm));
    for(int i=0;i<hm;i++){
      for(int j=0;j<wm;j++){
        int a;
        cin>>a;
        wh[i][j]=a;
      }
    }
    int ans=0;
    for(int i=0;i<hm;i++){
      for(int j=0;j<wm;j++){
        if(wh[i][j]==1){
          //cout<<"*"<<i<<" "<<j<<endl;
          wh[i][j]=0;
          dfs(i,j);
          ans++;
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}