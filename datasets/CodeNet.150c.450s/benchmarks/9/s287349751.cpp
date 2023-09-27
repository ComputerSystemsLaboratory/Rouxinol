#include <stdio.h>
#include <string.h>

int main(){
  char s[200],work;
  unsigned int m,h,i,j,k;

  while(1){

    scanf("%s",s);
    if(s[0]=='-') break;
    
    scanf("%d",&m);
    
    for(i=0; i<m; ++i){
      scanf("%d",&h);
      for(j=0; j<h; ++j){
	for(k=0; k < strlen(s) ; ++k){
	  if(k==0)
	    work=s[0];
	  else 
	    s[k-1]=s[k];
	}
	s[strlen(s)-1]=work;
      }
    }
    
    printf("%s\n",s);
    
  }
  

  return 0;
}

