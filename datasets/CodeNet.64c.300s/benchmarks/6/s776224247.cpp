#include<stdio.h>
int main( ){
  int n,b,f,r,v,a[4][3][10]={};
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d %d %d %d",&b,&f,&r,&v);
    a[b-1][f-1][r-1]+=v;
    if(a[b-1][f-1][r-1]<0){
      a[b-1][f-1][r-1]=0;
    }
  }
  for(int j=0;j<4;j++){
    for(int p=0;p<3;p++){
      for(int q=0;q<10;q++){
	printf(" %d",a[j][p][q]);
      }
      printf("\n");
    }
    if(j!=3)printf("####################\n");
  }
  return 0;
}