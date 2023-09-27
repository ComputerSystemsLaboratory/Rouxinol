#include<stdio.h>
int h,w;
char c[101][101];
int dy[4] = {0,0,1,-1};
int dx[4] = {1,-1,0,0};
void dfs(int y,int x,char cc){
  
  for(int i=0;i<4;i++){
    
    c[y][x] = '.';
    int yy = y+dy[i];
    int xx = x+dx[i];
    if(yy<0 || xx<0 || yy>=h || xx>=w || c[yy][xx] != cc) continue;
    dfs(yy,xx,cc);
  }

}
int main(){
  scanf("%d %d",&h,&w);
  while(h != 0 && w != 0){
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	scanf(" %c",&c[i][j]);
      }
    }
    
    int ans = 0;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(c[i][j] != '.'){
	  dfs(i,j,c[i][j]);
	  ans++;
	}
      }
    }
    
    printf("%d\n",ans);
    scanf("%d %d",&h,&w);
  }
  return (0);
}