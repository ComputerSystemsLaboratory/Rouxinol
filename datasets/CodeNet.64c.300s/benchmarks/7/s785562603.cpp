#include <stdio.h>
int main(){
  int box[4][13];
  int n,i,C,N,t,d;
  char r, c;
  for(C=1;C<=4;C++){
    for(t=1;t<=13;t++){
      box[C-1][t-1]=0;
    }
  }
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%c",&c);    
    scanf("%c",&c);    
    scanf("%d",&t);
    
   
    if(c=='S'){
      C=1;
    }
    if(c=='H'){
      C=2;
    }
    if(c=='C'){
      C=3;
    }
    if(c=='D'){
      C=4;
    }
   
    box[C-1][t-1]=1;
  }

  

  for(C=1;C<=4;C++){
    for(t=1;t<=13;t++){     
      if(box[C-1][t-1]==0){
	if(C==1){
	  c='S';
	}
	if(C==2){
	  c='H';
	}	
	if(C==3){
	  c='C';
	}
	if(C==4){
	  c='D';
	}	
	
	printf("%c %d\n",c,t);
      }
    }
  }
  return 0;
}