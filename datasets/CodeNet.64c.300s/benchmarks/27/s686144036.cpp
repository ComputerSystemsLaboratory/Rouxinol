#include <stdio.h>
int main(){
  int n,x,t,a,b,c;

  while(1){
    scanf("%d %d",&n,&x);    
    if ( n == 0 && x == 0 ) break;
    t=0; 
    for(a=1;a<=n;a++){
      for(b=1;b<=n;b++){
	for(c=1;c<=n;c++){
	  if(a<b&&b<c){
	    if(a+b+c==x){
	      ++t;
	    }
	  }
	}
      }
    }
    printf("%d\n",t);
  }

  return 0;
}