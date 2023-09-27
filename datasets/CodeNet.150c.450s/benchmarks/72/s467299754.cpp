#include <stdio.h>
int main(){
  char c,s[1201];
  int i,diff='a'-'A';
  for(i=0;i<1201;i++){
    scanf("%c",&c);
    if(c=='\n'){
      s[i]='\0';
      break;
    }
    else{
      if(c>='a'&&c<='z'){
	c=c-diff;
      }
      else if(c>='A'&&c<='Z'){
	c=c+diff;
      }
      s[i]=c;
    }
  }
  printf("%s\n",s);
  
}