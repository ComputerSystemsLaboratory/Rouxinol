#include <stdio.h>
int main(){
 
  int d[6],i,blank;
  char ENSW[100];
 
  for(i = 0; i < 6; i++){
 
    scanf("%d",&d[i]);
 
  }
 
  scanf("%s",ENSW);
   
  for(i = 0; ENSW[i] != '\0'; i++){
 
    if(ENSW[i] == 'N'){
 
      blank=d[0];
      d[0]=d[1];
      d[1]=d[5];
      d[5]=d[4];
      d[4]=blank;
 
    }
 
    if(ENSW[i] == 'E'){
 
      blank=d[0];
      d[0]=d[3];
      d[3]=d[5];
      d[5]=d[2];
      d[2]=blank;
 
    }
 
    if(ENSW[i] == 'S'){
 
      blank=d[0];
      d[0]=d[4];
      d[4]=d[5];
      d[5]=d[1];
      d[1]=blank;
 
    }
 
    if(ENSW[i] == 'W'){
 
      blank=d[0];
      d[0]=d[2];
      d[2]=d[5];
      d[5]=d[3];
      d[3]=blank;
 
    }
 
  }
   
  printf("%d\n",d[0]);
 
  return 0;
 
}
