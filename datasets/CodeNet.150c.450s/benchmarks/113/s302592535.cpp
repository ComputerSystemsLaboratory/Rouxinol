#include <stdio.h>
int main(){
  int x,i,I; 
    for(i=1;i>0;i++){
      scanf("%d",&x);      
      if(x==0)  break;
      
      else{      
	printf("Case %d: %d\n",i,x);
      }
    }
  
  return 0;
}