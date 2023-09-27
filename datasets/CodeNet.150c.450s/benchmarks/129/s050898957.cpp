#include<stdio.h>
int main(){
  int r,c,i,j,x,y,z;

  scanf("%d %d",&r,&c);
  
  int a[101][101];

  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }
  (y=0);
  for(j=0;j<c;j++){
    for(i=0;i<r;i++){
      (y=y+a[i][j]);
      (a[r][j]=y);
    }
    (y=0);
  }

  (x=0);

  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      (x=x+a[i][j]);
      (a[i][c]=x);
    }
    (x=0);
  }

  (z=0);

  for(i=r;i<r+1;i++){
    for(j=0;j<c;j++){
      (z=z+a[i][j]);
      (a[r][c]=z);
    }
    (z=0);
  }

  for(i=0;i<r+1;i++){
    for(j=0;j<c+1;j++){
      printf("%d",a[i][j]);
      if(j<c){
	printf(" ");
      }
    }
    printf("\n");
   }
  return 0;
}

  