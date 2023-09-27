#include <stdio.h>
int main(){
  int b,f,r,V,n,i,runonce=1;
  int box[4][3][10]={0,0,0};
  int prevb,prevf,prevr,prevV;
  prevV = 0;
  scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d %d %d %d",&b,&f,&r,&V);
    box[b-1][f-1][r-1]+=V;
   
}
  for(b=1;b<4;b++){
    for(f=1;f<=3;f++){
      for(r=1;r<=10;r++){
	 
	if(r<=9){
	  
	  if(box[b-1][f-1][r-1]==0){
	    printf(" 0");
	  }
	  else{
	    printf(" %d",box[b-1][f-1][r-1]);
	  }
	}
	if(r==10){
          if(box[b-1][f-1][r-1]==0){
	    printf(" 0\n");
	  }

	  else{
	    printf(" %d\n",box[b-1][f-1][r-1]);
	  }
	 
	}}
	if(f==3){
	  printf("####################\n");
	}
      }}
  if(b=4){
for(f=1;f<=3;f++){
      for(r=1;r<=10;r++){
	if(r<=9){
	  if(box[b-1][f-1][r-1]==0){
	    printf(" 0");
	  }
	  else{
	    printf(" %d",box[b-1][f-1][r-1]);
	  }
	}
	if(r==10){
          if(box[b-1][f-1][r-1]==0){
	    printf(" 0\n");
	  }

	  else{
	    printf(" %d\n",box[b-1][f-1][r-1]);
	  }
	}
      }
 }}
  return 0;
}