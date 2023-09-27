#include <stdio.h>
int main(void){
  int i,j,r;
  char g;
  for(;;){
    scanf("%d %d %d",&i,&j,&r);
      if(i==-1&&j==-1&&r==-1){
        return 0;
      } else if(i==-1||j==-1){
        g='F';
      }
        else if(i+j>=80){
        g='A';
      } else if (i+j>=65){
        g='B';
      } else if (i+j>=50){
        g='C';
      } else if (i+j>=30&&r>=50){
        g='C';
      } else if (i+j>=30){
        g='D';
      } else {
        g='F';
      }
    printf("%C\n",g);
  }
}