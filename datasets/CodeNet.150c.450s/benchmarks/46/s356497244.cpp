#include <stdio.h>

int main(void)
{
  int n,x;
  int i,j,k;
  int co;
  
  do{
    co = 0;
    scanf("%d%d",&n,&x);

    if(n == 0 && x == 0)
      break;
    else{
      for(i=1; i<=n; i++){
	for(j=1; j<=n; j++){
	  for(k=1; k<=n; k++){
	    if((i + j + k) == x){
	      if(i == j || j == k || k ==i)
		co = co;
	      else
		co++;
	    }
    	  }
	}
      }
    }

    printf("%d\n",co/6);

  }while(1);

  return(0);
}