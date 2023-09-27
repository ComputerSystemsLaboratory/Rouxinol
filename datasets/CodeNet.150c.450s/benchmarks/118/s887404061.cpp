#include <stdio.h>
int main(){
  int total,n,Y,M,D,y,yy,I,ii,i;
  
  total=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d %d %d",&Y,&M,&D);
    y=Y/3;
    yy=Y%3;
    if(Y==1){
      for(I=1;I<M;I++){
	if(I%2==0){
	  total+=19;
	}
	else {
	  total+=20;
	}
      }
      total+=D;
    }
   
    if(Y==2){
      total=195;
      for(I=1;I<=M;I++){
	if(I%2==0){
	  total+=19;
	}
	else {
	  total+=20;
	}
      }
      total+=D;
    }
    
    if(Y>=3){
      total=390;
      for(I=1;I<=y;I++){
	if(I>=2) total+=590;
      }
      for(ii=1;ii<=yy;ii++){
	if(ii==1) total+=200;
	  
	if(ii==2) total+=195;
      }
    
      
      if(Y%3==0){
	for(I=1;I<M;I++){
	  total+=20;
	}
      }
      else {
	for(I=1;I<M;I++){
	  if(I%2==1) total+=20;
	  else total+=19;
	}
      }
      total+=D;
    }
    
   
    printf("%d\n",196471-total);
    total=0;
  }
  return 0;
}
	     