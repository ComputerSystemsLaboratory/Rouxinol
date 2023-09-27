#include<stdio.h>
int main(){
  char a,b[1201]={0};
  int c=0;
  while(1){
    scanf("%c",&a);
    if(a>='A'&&a<='Z'){
      a+=32;
    }
    else if(a>='a'&&a<='z'){
      a-=32;
    }
    if(a=='\n'){
      break;
    }
    b[c]=a;
    c++;
  }
  printf("%s\n",b);
}