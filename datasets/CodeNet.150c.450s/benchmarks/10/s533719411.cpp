#include<stdio.h>
int main(){ 
  int n,i,j,k;
  int b,f,r,v;
  int kita[10][3]={0};
  int mina[10][3]={0};
  int nisi[10][3]={0};
  int higa[10][3]={0};
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d %d",&b,&f,&r,&v);
    if(b==1){
      kita[r-1][f-1]=kita[r-1][f-1]+v;
    }
    if(b==2){
      mina[r-1][f-1]=mina[r-1][f-1]+v;
    }
    if(b==3){
      nisi[r-1][f-1]=nisi[r-1][f-1]+v;
    }
    if(b==4){
      higa[r-1][f-1]=higa[r-1][f-1]+v;
    }
  }
  for(i=0;i<4;i++){ 
    for(k=0;k<3;k++){
      for(j=0;j<10;j++){
	if(i==0){
	  printf(" %d",kita[j][k]);
	}
	if(i==1){
	  printf(" %d",mina[j][k]);
	}
	if(i==2){
	  printf(" %d",nisi[j][k]);
	}
	if(i==3){
	  printf(" %d",higa[j][k]);
	}
      }
      printf("\n");
    }
    if(i==3) break;
    printf("####################\n");
  }
  return(0);
}