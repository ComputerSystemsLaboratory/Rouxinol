#include <stdio.h>
#define N 20
int main(){
  int i,j,x,y,n,step,gems,xy[N+1][N+1],rx,ry,count;
  char dir;
  while(1){
    for(i=0;i<N+1;i++){
      for(j=0;j<N+1;j++){
	xy[i][j] = 0;
      }
    }
    rx = 10;
    ry = 10;
    count = 0;

    scanf("%d",&n);
    if( n==0 ) break;
    gems = n;
    for(i=0;i<n;i++){
      scanf("%d %d",&x,&y);
      xy[y][x] = 1;
    }

    scanf("%d",&n);
    for(j=0;j<n;j++){
      scanf(" %c %d",&dir,&step);
      if( dir == 'E'){
	for(i=rx;i<=rx+step;i++){
	  if( xy[ry][i] == 1 ){
	    count++;
	    xy[ry][i] = 0;
	  }
	}
	rx = i-1;
      }
      else if( dir == 'W'){
	for(i=rx;i>=rx-step;i--){
	  if( xy[ry][i] == 1 ){
	    count++;
	    xy[ry][i] = 0;
	  }
	}
	rx = i+1;
      }
      else if( dir == 'N' ){
	for(i=ry;i<=ry+step;i++){
	  if( xy[i][rx] == 1 ) {
	    count++;
	    xy[i][rx] = 0;
	  }
	}
	ry = i-1;
      }
      else if( dir == 'S' ){
	for(i=ry;i>=ry-step;i--){
	  if( xy[i][rx] == 1 ) {
	    count++;
	    xy[i][rx] = 0;
	  }
	}
	ry = i+1;
      }
    }
    if( count == gems ){
      printf("Yes\n");
    }
    else{
      printf("No\n");

    }
  }
  return 0;
}