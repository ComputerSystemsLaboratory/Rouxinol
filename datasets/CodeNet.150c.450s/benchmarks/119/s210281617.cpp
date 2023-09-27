#include<stdio.h>
int a[50][50],w,h;
void sima(int x,int y) {
  int i,j;
  a[y][x]=0;
  for(i=-1;i<=1;i++){
    for(j=-1;j<=1;j++){
      if(x+i>=0 && x+i<w && y+j>=0 && y+j<h){
	if(a[y+j][x+i]==1) sima(x+i,y+j); 
      }
    }
  }
}
int main(){

  int i,j,count;
  while(1){
    count=0;

  scanf("%d%d",&w,&h);
  if(w==0 && h==0) break;

  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      if(a[i][j]==1){
	count++;
	sima(j,i);
      }
    }
  }   
  printf("%d\n",count);
  }

    return 0;
  }