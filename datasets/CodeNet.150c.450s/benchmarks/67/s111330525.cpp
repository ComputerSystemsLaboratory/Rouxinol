
#include <stdio.h>
int main(){
  int n,v,a=0,i,x,V;
  while(1){
    a=0;
    scanf("%d",&v);
    if(v==0) break;
    else {
      for(i=1;;i++){
	V=i;
	for(x=i+1;;x++){
	  V+=x;
	  if(V<v) continue;
	  else if(V==v) {
	    a++;
	    break;
	  }
	  else if(V>v){
	    break;
	  }
	}
	if(v==i) {
	  break;
	}
      }
      printf("%d\n",a);
    }}
      return 0;
    }