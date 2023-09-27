#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> P;

int c[100][100];//0??????
int h,w;

int dx[8]={1,1,0,-1,-1,-1,0,1},dy[8]={0,1,1,1,0,-1,-1,-1};

void bfs(int i,int j){
    queue<P> q;
    q.push(P(i,j));
    c[i][j]=0;
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;
        q.pop();
        for(int i=0;i<8;i++){
            int nx=x+dx[i],ny=y+dy[i];
            if(0<=nx&&nx<h&&0<=ny&&ny<w&&c[nx][ny]==1){
                q.push(P(nx,ny));
                c[nx][ny]=0;
            }
        }
    }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true){
      cin>>w>>h;
      if(w==0&&h==0) break;
      for(int i=0;i<h;i++)for(int j=0;j<w;j++){
          cin>>c[i][j];
      }
      int res=0;
      for(int i=0;i<h;i++)for(int j=0;j<w;j++){
          if(c[i][j]==1){
              bfs(i,j);
              res++;
          }
      }
      cout<<res<<endl;
  }
}