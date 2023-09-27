#include <stdio.h>
  int main(){
	  while(1){
		  int x[400][400]={};
          int a=200,b=200,n,i,j,k,c,d,w=0,h=0;
		  x[a][b]=1;
		  scanf("%d",&n); if(n==0) break;
		  for(i=1;i<n;i++){
			  scanf("%d%d",&c,&d);
			  for(j=-n;j<n;j++){
				  for(k=-n;k<n;k++){ 
					  if(x[a+j][b+k]==c+1){
						  if(d==0) x[a-1+j][b+k]=i+1; 
						  if(d==1) x[a+j][b-1+k]=i+1; 
						  if(d==2) x[a+1+j][b+k]=i+1; 
						  if(d==3) x[a+j][b+1+k]=i+1;
					  }
				  }
			  }
		  }
		  for(i=0;i<400;i++){
			  for(j=0;j<400;j++){
				  if(x[i][j]!=0){ 
					  w++;
					  goto aaa; 
				  } } aaa:;}
		  for(i=0;i<400;i++){
			  for(j=0;j<400;j++){
				  if(x[j][i]!=0){ 
					  h++;
					  goto baa; 
				  } } baa:;}
		  printf("%d %d\n",w,h);
	  }
	  return 0;
  }