#include<stdio.h>
int a[20][20]={};
int xg,yg;
int c=0;
void tansa(int x,int y){
  // printf("point\n");
  if(x==xg&&y==yg){
    c++;
  }
  else{
    if(x!=xg){
      if(a[y][x+1]==0){
	tansa(x+1,y);
      }
    }
    if(y!=yg){
      if(a[y+1][x]==0){
	tansa(x,y+1);
      }
    }
  }
}
int main(){
  int n,i,j,x,y;
  while(1){
    for(i=0;i<20;i++){
      for(j=0;j<20;j++){
	a[i][j]=0;
      }
    }
    c=0;
    scanf("%d%d",&xg,&yg);
    if(xg==0&&yg==0)break;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d%d",&x,&y);
      a[y][x]=1;
    }
    tansa(1,1);
    printf("%d\n",c);
  }
  return 0;
}