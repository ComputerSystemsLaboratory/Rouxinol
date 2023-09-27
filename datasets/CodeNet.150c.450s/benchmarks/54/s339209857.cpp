#include <stdio.h>
#include <string.h>

int main(){
  char w[11], t[1000];
  unsigned int i,k,cnt=0,flag=0;

  scanf("%s",w);

  while(1){
    scanf("%s",t); 
    if(strcmp(t,"END_OF_TEXT") == 0) break;

    if(strlen(w)==strlen(t)){
      for(i=0; i<=strlen(t) - strlen(w); ++i){
	flag=0;
	if(w[0] == t[i] || w[0] == t[i] - 32 || w[0] == t[i] + 32){
	  for(k=0; k<strlen(w); ++k){
	    if(i+k<strlen(t)){
	      if(w[k] == t[i+k] || w[k] == t[i+k] - 32 || w[k] == t[i+k] + 32){
		if(k+1==strlen(w)){
		  ++cnt;
		  flag=1;
		  break;
		}
		continue;
	      }else break;
	    }else break;
	  }
	}
	if(flag) break;
      }
    }
  }

  printf("%d\n",cnt);


  return 0;
}

