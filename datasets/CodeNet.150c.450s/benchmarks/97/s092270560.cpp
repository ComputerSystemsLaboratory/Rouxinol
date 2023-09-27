#include <stdio.h>
int main(){
  int i,j,minh,maxh,minw,maxw,n,m,w,cube[200][2];
  
  while(1){
    scanf("%d",&m);
    if(m == 0) break;
    cube[0][0] = 0;
    cube[0][1] = 0;
    minh = 0;
    minw = 0;
    maxh = 0;
    maxw = 0;
    
    for(i=1;i<m;i++){
      scanf("%d %d",&n,&w);
      if(w == 0){
	cube[i][0] = cube[n][0]+1;
	cube[i][1] = cube[n][1];
	if(cube[i][0]>maxw) maxw=cube[i][0];
      }
      else if(w == 1){
	cube[i][1] = cube[n][1]+1;
	cube[i][0] = cube[n][0];
	if(cube[i][1]>maxh) maxh=cube[i][1];
      }
      else if(w == 2){
	cube[i][0] = cube[n][0]-1;
	cube[i][1] = cube[n][1];
	if(cube[i][0]<minw) minw=cube[i][0];
      }
      else if(w == 3){
	cube[i][1] = cube[n][1]-1;
	cube[i][0] = cube[n][0];
	if(cube[i][1]<minh) minh=cube[i][1];
      }
    }
    printf("%d %d\n",maxw-minw+1,maxh-minh+1);
  }
  return 0;
}