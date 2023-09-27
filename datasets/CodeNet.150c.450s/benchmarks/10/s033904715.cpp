#include<stdio.h>

int main(){
  int kousha[4][3][10],n,b,f,r,v,i,j,k;

  for(i=0;i<4;i++)
    for(j=0;j<3;j++)
      for(k=0;k<10;k++)
	kousha[i][j][k]=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d %d %d %d",&b,&f,&r,&v);

    if(kousha[b-1][f-1][r-1]==0)kousha[b-1][f-1][r-1]=v;
    else kousha[b-1][f-1][r-1]+=v;

}

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      for(k=0;k<10;k++){
	printf("%2d",kousha[i][j][k]);
      }
      printf("\n");
    }
    if(i<3)printf("####################\n");
  }

  return 0;
}