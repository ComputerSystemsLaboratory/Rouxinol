#include<stdio.h>
int main(){
  int n,m,i,j;
  int s[14]={0};
  int h[14]={0};
  int c[14]={0};
  int d[14]={0};
  char arf;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c %d",&arf,&m);
    if(arf=='S'){
      s[m]=1;
    }
    if(arf=='H'){
      h[m]=1;
    }
    if(arf=='C'){
      c[m]=1;
    }
    if(arf=='D'){
      d[m]=1;
    }
  }
  for(i=0;i<4;i++){
    for(j=1;j<=13;j++){
      if(i==0){
	if(s[j]==0){
	  printf("S %d\n",j);
	}
      }
      if(i==1){
	if(h[j]==0){
	  printf("H %d\n",j);
	}
      }
      if(i==2){
	if(c[j]==0){
	  printf("C %d\n",j);
	}
      }
      if(i==3){
	if(d[j]==0){
	  printf("D %d\n",j);
	}
      }
    }
  }
  return(0);
}