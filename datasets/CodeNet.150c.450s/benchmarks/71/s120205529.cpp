#include<stdio.h>

int main(){
  int n,n1,n2,n3,n4;
  int i,j,k,l;
  while(scanf("%d", &n) != EOF){
    int m=0;
    for(i=0;i<10;i++){
      n1=n-i;
      for(j=0;j<10;j++){
	n2=n1-j;
	for(k=0;k<10;k++){
	  n3=n2-k;
	  for(l=0;l<10;l++){
	    n4=n3-l;
	    
	    if(n4==0)
	      m++;
	  } 
	} 
      } 
    }
    printf("%d\n",m);
  }
  return 0;
}