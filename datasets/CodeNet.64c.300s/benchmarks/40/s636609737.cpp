#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  char ch;
  int d;
  while(1){
    scanf("%c",&ch);
    d = ch;
    if((d >= 65)&&(d <= 96)){
      d = d + 32;
    }else if((d > 96)&&(d <=122)){
      d = d - 32;
    }
    if(ch == '\n'){
      break;
    }else{
      printf("%c",d);
    }
  }
  printf("\n");
  return 0;
}

