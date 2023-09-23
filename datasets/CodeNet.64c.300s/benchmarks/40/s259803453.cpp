#include <stdio.h>

int main(){

  char n;

  for(;;){

    scanf("%c",&n);
    
    if(n=='\n'){break;
    }
    
    if(n<97&&n>=65){
      n+=32;
    }

    else if(n>=97&&n<123){
      n-=32;
    }

    printf("%c",n);

      }

  printf("\n");

  return 0;
}