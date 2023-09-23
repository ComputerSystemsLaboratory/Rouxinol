#include<stdio.h>
int main(){
  char a;
  int i=0,c;

  while(1){
    scanf("%c",&a);
    if(a=='\n'){
      printf("\n");
      break;
    }
    if(a>=65 && a<=90){
      a+=32;
    }
    else if(a>=97 && a<=122){
      a-=32;
    }
    printf("%c",a);
  }
  return 0;
}