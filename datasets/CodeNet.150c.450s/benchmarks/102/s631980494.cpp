#include<cstdio>
using namespace std;
int w,h;
char m[21][21];

int dfs(int y,int x){
  if(x < 0 || x >= w)return 0;
  if(y < 0 || y >= h)return 0;
  if(m[y][x] == '#') return 0;
  int ret = 1;
  m[y][x] = '#';
  ret += dfs(y+1,x);
  ret += dfs(y-1,x);
  ret += dfs(y,x+1);
  ret += dfs(y,x-1);
  return ret;
}

int main(){
  int sx,sy;
  while(true){
  scanf("%d %d",&w,&h);
  if(w == 0 && h == 0)break;
  for(int i = 0;i < h;i++){
    scanf("%s",m[i]);
    for(int j = 0;j < w;j++){
      if(m[i][j] == '@'){
        sx=j;sy=i;
      }
    }
  }
  printf("%d\n",dfs(sy,sx));
  }
}