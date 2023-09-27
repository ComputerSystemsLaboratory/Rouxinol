#include <stdio.h>
int main(){

  char n;
  int i,m;
  int s[26]={};

  for(;;){
    m=scanf("%c",&n);
    
    if(m==EOF){
      break;
    }

  
    for(i=0;i<=25;i++){
      if(n=='a'+i){
	s[i]++;
      }
      if(n=='A'+i){
	  s[i]++;
      }
    }
   
  }
      for(i=0;i<=25;i++){
	printf("%c : %d\n",'a'+i,s[i]);
      }

      return 0;

    }