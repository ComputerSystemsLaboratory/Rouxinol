#include <stdio.h>
int main(){
  char s[1001];
  char r,c;
  int i,v=0,j,h;
  while(1){
    scanf("%s",s);
    if(s[0]=='0') break;
    else{
      for(i=0;s[i]!='\0';i++){
	v=v+s[i]-'0';
      }
      printf("%d\n",v);
      v=0;
    }
  }
  return 0;
}