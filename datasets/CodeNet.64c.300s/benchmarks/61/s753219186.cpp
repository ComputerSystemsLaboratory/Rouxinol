#include<stdio.h>
int main( ){
  int r,c,a[101][101]={};
  scanf("%d %d",&r,&c);
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int x=0;x<=r;x++){
    for(int b=0;b<=c;b++){
      if(x!=r&&b!=c){
	a[x][c]+=a[x][b];
      }
      if(x!=r){
	a[r][b]+=a[x][b];
      }
      if(x!=r&&b!=c){
	printf("%d ",a[x][b]);
      }
      else if(b==c){
	printf("%d\n",a[x][c]);
      }
      else if(r==x&&b!=c){
	printf("%d ",a[r][b]);
	
      }
    }
  }
  return 0;
}