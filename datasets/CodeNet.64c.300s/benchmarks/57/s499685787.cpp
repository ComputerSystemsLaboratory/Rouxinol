#include<cstdio>

int solve(){
  int r,c;
  scanf("%d %d",&r,&c);
  if(r==0&&c==0) return 1;
  int senbei[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&senbei[i][j]);
    }
  }
  int ans = 0;
  for(int i=0;i<1<<r;i++){
    int x = 0;
    for(int j=0;j<c;j++){
      int t = 0;
      for(int k=0;k<r;k++){
        if(senbei[k][j]==(i>>k)%2) t++;
      }
      if(t<r-t) t = r-t;
      x+=t;
    }
    if(ans<x) ans = x;
  }
  printf("%d\n",ans);
  return 0;
}

int main(){
  while(true) if(solve()) return 0;
}