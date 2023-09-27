#include <stdio.h>
int main(){

  int n,x,r,i,j,k;

  while(1){

    scanf("%d %d",&n,&x);
	  
    if (n != 0 || x != 0){

      r=0;
      
      for(i = 0; i < n; i++){
	
	for(j = 0; j < i; j++){
	  
	  for(k = 0; k < j; k++){
	    
	    if (i+j+k+3 == x){
	      
	      r++;
	      
	    }
	    
	  }
	  
	}
	
      }
      
      printf("%d\n",r);
      
    } else {
      
      break;

    }
    
  }

  return 0;

}