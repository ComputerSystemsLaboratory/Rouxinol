#include <iostream>
#include <vector>

using namespace std;

char m[110][110];
int h,w;

void dfs(int x,int y,char c){
  int dx[] = {0,0,1,-1}, dy[] = {1,-1,0,0};
  m[y][x] = 'f';
  for(int i = 0 ; i < 4 ; i ++){
    int nx = x + dx[i] , ny = y + dy[i];
    if(m[ny][nx] != c)continue;
    if(ny < 0 || nx < 0 || h <= ny || w <= nx)continue;
    dfs(nx,ny,c);
  }
  return;
}


int main(void){
  while(cin>>h>>w,h+w){
    for(int i = 0 ; i < h ; i ++){
      for(int j = 0 ;j  < w ; j ++){
        cin>>m[i][j];
      }
    }
    int ret = 0;
    for(int i = 0 ; i < h ; i ++){
      for(int j = 0 ;j  < w ; j ++){
        if(m[i][j] != 'f'){
          ret ++;
          //cout<<i<<" "<<j<<endl;
          dfs(j,i,m[i][j]);
          /*
          for(int k = 0 ; k < h ; k ++){
            for(int l = 0 ; l < w ; l ++){
              cout<<m[k][l];
            }
            cout<<endl;
          }
          cout<<endl;
          */
        }
      }
    }    
    cout<<ret<<endl;
  }
}