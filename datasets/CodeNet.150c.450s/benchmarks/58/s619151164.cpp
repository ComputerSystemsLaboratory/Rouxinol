#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

  char symbol[100];
  int  num[99],x=0;

  while(scanf("%s",symbol)!=EOF){
  if(symbol[0]=='+'){
    num[x-2]=num[x-2]+num[x-1];
    x--;
  }
  else if(symbol[0]=='-'){
    num[x-2]=num[x-2]-num[x-1];
    x--;
  }
  else if(symbol[0]=='*'){
    num[x-2]=num[x-2]*num[x-1];
    x--;
  }
  else{
    
    num[x]=atoi(symbol);
    x++;
  }
  }
  printf("%d\n",num[0]);

  return 0;
}

  